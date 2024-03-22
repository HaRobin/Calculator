#include "headers/calculator.h"
#include "ui_calculator.h"

Calculator::Calculator(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Calculator)
{
    ui->setupUi(this);

    tabsWidget->addTab(new QWidget, "Calculator");
    tabsWidget->addTab(new QWidget, "Convertor");
    tabsWidget->addTab(new QWidget, "History");
    setCentralWidget(tabsWidget);

}

Calculator::~Calculator()
{
    delete ui;
}
