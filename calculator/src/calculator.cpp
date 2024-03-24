#include "headers/calculator.h"
#include "ui_calculator.h"

#include <string>
#include <map>
#include <functional>

Calculator::Calculator(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Calculator)
{
    ui->setupUi(this);

    std::string currentCalculation;
    std::string oldCalculation;
    bool calculating;

    std::map <std::string, std::string> digitsAndOperations = {
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

    // std::map <std::string, void (Calculator::*)()> actions;
    // = {
    //     {"=", &Calculator::calculate}
    // };
    // actions["="] = &Calculator::calculate;

    std::map<std::string, std::function<void()>> actions;
    actions["="] = std::bind(&Calculator::calculate, this);

    // After populating the map in the constructor
    qDebug() << "Map populated in constructor. Size:" << actions.size();




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


    // At the beginning of the method where the map appears empty
    qDebug() << "Accessing map in method. Size:" << actions.size();


    QPushButton *button = qobject_cast<QPushButton *>(sender());
    if (button) {
        qDebug() << "Button clicked:" << button->text();
        if (contains(digitsAndOperations, button->text().toStdString())) {
            qDebug() << "Button clicked:" << button->text();
        }
        else if (contains(actions, button->text().toStdString())) {

            // qDebug() << "Button clicked:" << button->text();


            // (this->*actions.find(button->text())->second)();
            // actions.find()

        }
    }

    for (const auto& pair : actions) {
        qDebug() << "Key:" << QString::fromStdString(pair.first);
    }

    auto it = actions.find("=");

    if (it != actions.end()) {
        qDebug() << "found";
    }
    else {
        qDebug() << "not found";
    }
}


void Calculator::changeCalculatorMode() {
    int currentIndex = ui->stackedWidget->currentIndex();
    int nextPage = (currentIndex + 1) % ui->stackedWidget->count(); // Assuming only two pages
    ui->stackedWidget->setCurrentIndex(nextPage);
}

bool contains(const std::string& str, char ch) {
    return str.find(ch) != std::string::npos;
}


void Calculator::on_changeLayout2_clicked()
{
    changeCalculatorMode();
}


void Calculator::on_changeLayoutButton1_clicked()
{
    changeCalculatorMode();
}

void Calculator::backspace() {
    currentCalculation.pop_back();
}

void Calculator::allClear() {
    currentCalculation.clear();
}

void Calculator::calculate() {

    qDebug() << "equal button pressed";

    // TODO use muparser to parse string
}

template<typename T>
bool Calculator::contains(const std::map<std::string, T>& map, const std::string& str) {
    // Use the find method of the map to search for the key. If the key is found,
    // find will return an iterator to the corresponding element, otherwise it
    // will return an iterator to the end of the map.
    return map.find(str) != map.end();
}

// struct CalculationInfo {


//     // Default constructor
//     CalculationInfo() : calculating(false),oldCalculation(""), calculating("") {}

//     // Constructor with parameters
//     CalculationInfo(const std::string& current, const std::string& old, bool calc)
//         : currentCalculation(current), oldCalculation(old), calculating(calc) {}

//     void backSpace() {
//         currentCalculation.pop_back();
//     }

//     void allClear() {
//         currentCalculation.clear();
//     }

//     void calculate() {
//         // TODO use muparser to parse string
//     }
// };
