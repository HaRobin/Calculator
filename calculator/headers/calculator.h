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
    std::string currentCalculation;
    std::string oldCalculation;
    bool calculating;

    void handleButton();
    void writeToCalculation(const std::string str);
    void calculate();
    void allClear();
    void backspace();
    void syncTextLabels();
    void addToHistory();

    template<typename T>
    bool contains(const std::map<std::string, T>& map, const std::string& str);

private slots:
    void changeCalculatorMode();
};
#endif // CALCULATOR_H
