#include "headers/calculator.h"
#include "ui_calculator.h"

#include <string>
#include <map>
#include <QLabel>
// #include "headers/muparser-2.3.4/include/muParser.h"
#include "muParser.h"

Calculator::Calculator(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Calculator)
{
    ui->setupUi(this);

    std::string currentCalculation;
    std::string oldCalculation;
    bool calculating;

    digitsAndOperations = {
        {"lg", "log10("},
        {"ln", "log("},
        {"%", "/100"},
        {"x^y", "^"},
        {"sqrt", "sqrt("},
        {"1/x", "^(-1)"},
        {"pi", "_pi"},
        {"x", "*"},
        {"e", "exp(1)"}
    };

    actions = {
        {"=", &Calculator::calculate},
        {"<[]>", &Calculator::changeCalculatorMode},
        {">[]<", &Calculator::changeCalculatorMode},
        {"AC", &Calculator::allClear},
        {"<-", &Calculator::backspace},
        {"</>", &Calculator::convert}
    };

    converter = {
        {"Centimeter to Inche", &Calculator::cmToInches},
        {"Decimal to Binary", &Calculator::decimalToBinary},
        {"Decimal to Hexadecimal", &Calculator::decimalToHexadecimal}
    };

    QList<QPushButton *> allButtons = this->findChildren<QPushButton *>();

    foreach(QPushButton *button, allButtons) {
        connect(button, &QPushButton::clicked, this, &Calculator::handleButton);
    }


    std::string converterInput;
    std::string converterOutput;
    foreach(auto const& item,  converter) {
        ui->comboBox->addItem(QString::fromStdString(item.first));
    }

}

Calculator::~Calculator()
{
    delete ui;
}

void Calculator::handleButton() {

    QPushButton *button = qobject_cast<QPushButton *>(sender());

    if (button) {
        if (contains(actions, button->text().toStdString())) {
            (this->*actions.find(button->text().toStdString())->second)();
        } else {
            writeToCalculation(
                contains(digitsAndOperations, button->text().toStdString()) ?
                    digitsAndOperations.find(button->text().toStdString())->second :
                    button->text().toStdString()
                );
        }
    }
}

void Calculator::writeToCalculation(const std::string str) {
    if (!calculating) {
        oldCalculation = currentCalculation;
        converterOutput.clear();
        allClear();
        calculating = true;
    }
    if (ui->tabWidget->currentIndex() == 0)
        currentCalculation.append(str);
    else if (ui->tabWidget->currentIndex() == 1)
        converterInput.append(str);
    syncTextLabels();
}

void Calculator::changeCalculatorMode() {
    int currentIndex = ui->stackedWidget->currentIndex();
    int nextPage = (currentIndex + 1) % ui->stackedWidget->count(); // Assuming only two pages
    ui->stackedWidget->setCurrentIndex(nextPage);
}

void Calculator::backspace() {
    if (!calculating) {
        oldCalculation = currentCalculation;
        converterOutput.clear();
        allClear();
        calculating = true;
    }

    if (ui->tabWidget->currentIndex() == 0 && currentCalculation.length() != 0)
        currentCalculation.pop_back();
    else if (ui->tabWidget->currentIndex() == 1 && converterInput.length() != 0)
        converterInput.pop_back();
    syncTextLabels();

}

void Calculator::allClear() {
    if (ui->tabWidget->currentIndex() == 0){
        currentCalculation.clear();
        oldCalculation.clear();
    } else if (ui->tabWidget->currentIndex() == 1) {
        converterInput.clear();
        converterOutput.clear();
    }
    syncTextLabels();
}

void Calculator::syncTextLabels() {
    ui->currentCalculation->setText(QString::fromStdString(currentCalculation));
    ui->inputConverter->setText(QString::fromStdString(converterInput));
    ui->oldCalculation->setText(QString::fromStdString(oldCalculation));
    ui->outputConverter->setText(QString::fromStdString(converterOutput));
}

void Calculator::calculate() {

    // TODO use muparser to parse string

    mu::Parser parser;
    parser.SetExpr(currentCalculation);
    // parser.SetExpr(L"6*5");

    calculating = false;


    oldCalculation = currentCalculation;
    try {
        currentCalculation =  std::to_string(parser.Eval());
    } catch (const mu::ParserError &e) {
        currentCalculation = "error";
    }


    // currentCalculation = "evaluated";



    syncTextLabels();

    addToHistory();
}

template<typename T>
bool Calculator::contains(const std::map<std::string, T>& map, const std::string& str) {
    // Use the find method of the map to search for the key. If the key is found,
    // find will return an iterator to the corresponding element, otherwise it
    // will return an iterator to the end of the map.
    return map.find(str) != map.end();
}

void Calculator::addToHistory() {

    // Adapt for converter

    QVBoxLayout* layout = qobject_cast<QVBoxLayout*>(ui->historyScrollAreaWidgetContents->layout());
    if (!layout) {
        layout = new QVBoxLayout(ui->historyScrollAreaWidgetContents);
        ui->historyScrollAreaWidgetContents->setLayout(layout);
    }
    std::string firstStr;
    std::string secondStr;
    if (ui->tabWidget->currentIndex() == 0) {
        firstStr = oldCalculation + " =";
        secondStr = currentCalculation;
    }
    else if (ui->tabWidget->currentIndex() == 1) {
        firstStr = ui->comboBox->currentText().toStdString();
        secondStr = converterInput + " -> " + converterOutput;
    }

    // First QLabel
    QLabel* label1 = new QLabel(QString::fromStdString(firstStr));
    label1->setAlignment(Qt::AlignRight); // Align text to the right
    QFont font1 = label1->font();
    font1.setPixelSize(15); // Set font size to 15 pixels
    label1->setFont(font1);
    label1->setFixedHeight(20);
    layout->insertWidget(0, label1);

    // Second QLabel
    QLabel* label2 = new QLabel(QString::fromStdString(secondStr));
    label2->setAlignment(Qt::AlignRight);
    QFont font2 = label2->font();
    font2.setPixelSize(30);
    label2->setFont(font2);
    label2->setFixedHeight(40);
    layout->insertWidget(1, label2);
}

void Calculator::convert() {
    calculating = false;

    converterOutput = (this->*converter.find(ui->comboBox->currentText().toStdString())->second)();;

    syncTextLabels();

    addToHistory();
}

std::string Calculator::decimalToHexadecimal() {
    int decimal;
    try {
        decimal = std::stoi(converterInput);
    } catch (const std::exception &e) {
        qDebug() << e.what();
        return "error";
    }

    std::string hexadecimal = "";
    char hexChars[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F'};

    while (decimal > 0) {
        hexadecimal = hexChars[decimal % 16] + hexadecimal;
        decimal /= 16;
    }

    return hexadecimal.empty() ? "0" : hexadecimal;
}

std::string Calculator::decimalToBinary() {
    int decimal;
    try {
        decimal = std::stoi(converterInput);
    } catch (const std::exception &e) {
        return "error";
    }
    std::string binary = "";
    while (decimal > 0) {
        binary = std::to_string(decimal % 2) + binary;
        decimal /= 2;
    }
    return binary.empty() ? "0" : binary;
}

std::string Calculator::cmToInches() {
    double cm;
    try {
        cm = std::stod(converterInput);
    } catch (const std::exception &e) {
        return "error";
    }
    return std::to_string(cm / 2.54);
}

void Calculator::on_comboBox_currentIndexChanged(int index)
{
    converterOutput.clear();
}
