#ifndef CALCULATOR_H
#define CALCULATOR_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class Calculator;
}
QT_END_NAMESPACE

class Calculator : public QMainWindow
{
    Q_OBJECT

public:
    Calculator(QWidget *parent = nullptr);
    ~Calculator();

private:
    Ui::Calculator *ui;

    std::map <std::string, std::string> digitsAndOperations;
    std::map<std::string, void (Calculator::*)()> actions;
    std::map <std::string, std::string (Calculator::*)()> converter;
    std::string currentCalculation;
    std::string oldCalculation;
    std::string converterInput;
    std::string converterOutput;
    bool calculating;

    void handleButton();
    void writeToCalculation(const std::string str);
    void calculate();
    void allClear();
    void backspace();
    void syncTextLabels();
    void addToHistory();
    void convert();
    std::string decimalToHexadecimal();
    std::string decimalToBinary();
    std::string cmToInches();

    template<typename T>
    bool contains(const std::map<std::string, T>& map, const std::string& str);

private slots:
    void changeCalculatorMode();
    void on_comboBox_currentIndexChanged(int index);
};
#endif // CALCULATOR_H
