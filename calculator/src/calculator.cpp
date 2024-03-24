#include "headers/calculator.h"
#include "ui_calculator.h"

#include <string>
#include <map>
#include <QLabel>

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
        {"ln", "log"},
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
        {"<-", &Calculator::backspace}
    };


    QList<QPushButton *> allButtons = this->findChildren<QPushButton *>();

    foreach(QPushButton *button, allButtons) {
        connect(button, &QPushButton::clicked, this, &Calculator::handleButton);
    }
}

Calculator::~Calculator()
{
    delete ui;
}

void Calculator::handleButton() {

    QPushButton *button = qobject_cast<QPushButton *>(sender());

    if (button) {
        qDebug() << "Button clicked:" << button->text();

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
        allClear();
        calculating = true;
    }
    currentCalculation.append(str);
    syncTextLabels();
}

void Calculator::changeCalculatorMode() {
    int currentIndex = ui->stackedWidget->currentIndex();
    int nextPage = (currentIndex + 1) % ui->stackedWidget->count(); // Assuming only two pages
    ui->stackedWidget->setCurrentIndex(nextPage);
}

void Calculator::backspace() {
    if (currentCalculation.length() != 0){
        currentCalculation.pop_back();
        syncTextLabels();
    }
}

void Calculator::allClear() {
    if (currentCalculation.length() != 0)
        currentCalculation.clear();
    else
        oldCalculation.clear();
    syncTextLabels();
}

void Calculator::syncTextLabels() {
    ui->currentCalculation->setText(QString::fromStdString(currentCalculation));
    ui->oldCalculation->setText(QString::fromStdString(oldCalculation));
}

void Calculator::calculate() {

    // TODO use muparser to parse string

    calculating = false;

    oldCalculation = currentCalculation;
    currentCalculation = "evaluated";



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

    QVBoxLayout* layout = qobject_cast<QVBoxLayout*>(ui->historyScrollAreaWidgetContents->layout());
    if (!layout) {
        layout = new QVBoxLayout(ui->historyScrollAreaWidgetContents);
        ui->historyScrollAreaWidgetContents->setLayout(layout);
    }

    // First QLabel -> calculation
    QLabel* label1 = new QLabel(QString::fromStdString(oldCalculation + " ="));
    label1->setAlignment(Qt::AlignRight); // Align text to the right
    QFont font1 = label1->font();
    font1.setPixelSize(15); // Set font size to 15 pixels
    label1->setFont(font1);
    label1->setFixedHeight(20);
    layout->insertWidget(0, label1);

    // Second QLabel -> result
    QLabel* label2 = new QLabel(QString::fromStdString(currentCalculation));
    label2->setAlignment(Qt::AlignRight);
    QFont font2 = label2->font();
    font2.setPixelSize(30);
    label2->setFont(font2);
    label2->setFixedHeight(40);
    layout->insertWidget(1, label2);
}
