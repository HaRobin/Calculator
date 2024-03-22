#ifndef CALCULATOR_H
#define CALCULATOR_H

#include <QMainWindow>
#include <QTabWidget>

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

    QTabWidget *tabsWidget = new QTabWidget(this);
};
#endif // CALCULATOR_H
