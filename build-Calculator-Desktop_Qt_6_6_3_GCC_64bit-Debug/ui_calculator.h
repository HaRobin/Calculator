/********************************************************************************
** Form generated from reading UI file 'calculator.ui'
**
** Created by: Qt User Interface Compiler version 6.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CALCULATOR_H
#define UI_CALCULATOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Calculator
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout_8;
    QTabWidget *tabWidget;
    QWidget *calculatorTabWidget;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QGridLayout *gridLayout_3;
    QGridLayout *gridLayout_2;
    QPushButton *changeLayoutButton1;
    QPushButton *backspaceButton1;
    QPushButton *fiveButton1;
    QPushButton *perCentButton1;
    QPushButton *ninceButton1;
    QPushButton *eightButton1;
    QPushButton *divideButton1;
    QPushButton *fourButton1;
    QPushButton *allClearButton1;
    QPushButton *minusButton1;
    QPushButton *oneButton1;
    QPushButton *sevenButton1;
    QPushButton *timesutton1;
    QPushButton *sixButton1;
    QPushButton *twoButton1;
    QPushButton *threeButton1;
    QPushButton *plusButton1;
    QPushButton *zeroButton1;
    QPushButton *commaButton1;
    QPushButton *equalButton1;
    QWidget *page_2;
    QGridLayout *gridLayout_5;
    QGridLayout *gridLayout_4;
    QPushButton *changeLayout2;
    QPushButton *sixButton2;
    QPushButton *equalButton2;
    QPushButton *piButton2;
    QPushButton *zeroButton2;
    QPushButton *twoButton2;
    QPushButton *fiveButton2;
    QPushButton *naturalLogButton2;
    QPushButton *closingParenthesisButton2;
    QPushButton *perCentButton2;
    QPushButton *fourButton2;
    QPushButton *threeButton2;
    QPushButton *commaButton2;
    QPushButton *logButton2;
    QPushButton *sevenButton2;
    QPushButton *exponentialButton2;
    QPushButton *oneButton2;
    QPushButton *divideButton2;
    QPushButton *plusButton2;
    QPushButton *minusButton2;
    QPushButton *openingParenthesisButton2;
    QPushButton *backSpaceButton2;
    QPushButton *timesButton2;
    QPushButton *inverseButton2;
    QPushButton *allClearButton2;
    QPushButton *eightButton2;
    QPushButton *nineButton2;
    QPushButton *squareRootButton2;
    QPushButton *powerButton2;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *oldCalculation;
    QLabel *currentCalculation;
    QWidget *converterTabWidget;
    QGridLayout *gridLayout_7;
    QComboBox *comboBox;
    QHBoxLayout *horizontalLayout;
    QLabel *inputConverter;
    QLabel *outputConverter;
    QGridLayout *gridLayout;
    QPushButton *pushButton_10;
    QPushButton *pushButton_11;
    QPushButton *pushButton_3;
    QPushButton *pushButton_13;
    QPushButton *pushButton_2;
    QPushButton *pushButton_4;
    QPushButton *pushButton_9;
    QPushButton *pushButton_5;
    QPushButton *pushButton_14;
    QPushButton *pushButton_8;
    QPushButton *pushButton_7;
    QPushButton *pushButton_6;
    QPushButton *pushButton_12;
    QPushButton *pushButton;
    QWidget *historyTabWidget;
    QGridLayout *gridLayout_6;
    QScrollArea *scrollArea;
    QWidget *historyScrollAreaWidgetContents;

    void setupUi(QMainWindow *Calculator)
    {
        if (Calculator->objectName().isEmpty())
            Calculator->setObjectName("Calculator");
        Calculator->resize(400, 647);
        QSizePolicy sizePolicy(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Calculator->sizePolicy().hasHeightForWidth());
        Calculator->setSizePolicy(sizePolicy);
        Calculator->setMinimumSize(QSize(400, 647));
        Calculator->setMaximumSize(QSize(400, 647));
        centralwidget = new QWidget(Calculator);
        centralwidget->setObjectName("centralwidget");
        gridLayout_8 = new QGridLayout(centralwidget);
        gridLayout_8->setObjectName("gridLayout_8");
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName("tabWidget");
        calculatorTabWidget = new QWidget();
        calculatorTabWidget->setObjectName("calculatorTabWidget");
        stackedWidget = new QStackedWidget(calculatorTabWidget);
        stackedWidget->setObjectName("stackedWidget");
        stackedWidget->setGeometry(QRect(-1, 149, 381, 451));
        page = new QWidget();
        page->setObjectName("page");
        gridLayout_3 = new QGridLayout(page);
        gridLayout_3->setObjectName("gridLayout_3");
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName("gridLayout_2");
        changeLayoutButton1 = new QPushButton(page);
        changeLayoutButton1->setObjectName("changeLayoutButton1");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(changeLayoutButton1->sizePolicy().hasHeightForWidth());
        changeLayoutButton1->setSizePolicy(sizePolicy1);
        QFont font;
        font.setPointSize(20);
        changeLayoutButton1->setFont(font);

        gridLayout_2->addWidget(changeLayoutButton1, 4, 0, 1, 1);

        backspaceButton1 = new QPushButton(page);
        backspaceButton1->setObjectName("backspaceButton1");
        sizePolicy1.setHeightForWidth(backspaceButton1->sizePolicy().hasHeightForWidth());
        backspaceButton1->setSizePolicy(sizePolicy1);
        backspaceButton1->setFont(font);

        gridLayout_2->addWidget(backspaceButton1, 0, 1, 1, 1);

        fiveButton1 = new QPushButton(page);
        fiveButton1->setObjectName("fiveButton1");
        sizePolicy1.setHeightForWidth(fiveButton1->sizePolicy().hasHeightForWidth());
        fiveButton1->setSizePolicy(sizePolicy1);
        fiveButton1->setFont(font);

        gridLayout_2->addWidget(fiveButton1, 2, 1, 1, 1);

        perCentButton1 = new QPushButton(page);
        perCentButton1->setObjectName("perCentButton1");
        sizePolicy1.setHeightForWidth(perCentButton1->sizePolicy().hasHeightForWidth());
        perCentButton1->setSizePolicy(sizePolicy1);
        perCentButton1->setFont(font);

        gridLayout_2->addWidget(perCentButton1, 0, 2, 1, 1);

        ninceButton1 = new QPushButton(page);
        ninceButton1->setObjectName("ninceButton1");
        sizePolicy1.setHeightForWidth(ninceButton1->sizePolicy().hasHeightForWidth());
        ninceButton1->setSizePolicy(sizePolicy1);
        ninceButton1->setFont(font);

        gridLayout_2->addWidget(ninceButton1, 1, 2, 1, 1);

        eightButton1 = new QPushButton(page);
        eightButton1->setObjectName("eightButton1");
        sizePolicy1.setHeightForWidth(eightButton1->sizePolicy().hasHeightForWidth());
        eightButton1->setSizePolicy(sizePolicy1);
        eightButton1->setFont(font);

        gridLayout_2->addWidget(eightButton1, 1, 1, 1, 1);

        divideButton1 = new QPushButton(page);
        divideButton1->setObjectName("divideButton1");
        sizePolicy1.setHeightForWidth(divideButton1->sizePolicy().hasHeightForWidth());
        divideButton1->setSizePolicy(sizePolicy1);
        divideButton1->setFont(font);

        gridLayout_2->addWidget(divideButton1, 0, 3, 1, 1);

        fourButton1 = new QPushButton(page);
        fourButton1->setObjectName("fourButton1");
        sizePolicy1.setHeightForWidth(fourButton1->sizePolicy().hasHeightForWidth());
        fourButton1->setSizePolicy(sizePolicy1);
        fourButton1->setFont(font);

        gridLayout_2->addWidget(fourButton1, 2, 0, 1, 1);

        allClearButton1 = new QPushButton(page);
        allClearButton1->setObjectName("allClearButton1");
        sizePolicy1.setHeightForWidth(allClearButton1->sizePolicy().hasHeightForWidth());
        allClearButton1->setSizePolicy(sizePolicy1);
        allClearButton1->setFont(font);

        gridLayout_2->addWidget(allClearButton1, 0, 0, 1, 1);

        minusButton1 = new QPushButton(page);
        minusButton1->setObjectName("minusButton1");
        sizePolicy1.setHeightForWidth(minusButton1->sizePolicy().hasHeightForWidth());
        minusButton1->setSizePolicy(sizePolicy1);
        minusButton1->setFont(font);

        gridLayout_2->addWidget(minusButton1, 2, 3, 1, 1);

        oneButton1 = new QPushButton(page);
        oneButton1->setObjectName("oneButton1");
        sizePolicy1.setHeightForWidth(oneButton1->sizePolicy().hasHeightForWidth());
        oneButton1->setSizePolicy(sizePolicy1);
        oneButton1->setFont(font);

        gridLayout_2->addWidget(oneButton1, 3, 0, 1, 1);

        sevenButton1 = new QPushButton(page);
        sevenButton1->setObjectName("sevenButton1");
        sizePolicy1.setHeightForWidth(sevenButton1->sizePolicy().hasHeightForWidth());
        sevenButton1->setSizePolicy(sizePolicy1);
        sevenButton1->setFont(font);

        gridLayout_2->addWidget(sevenButton1, 1, 0, 1, 1);

        timesutton1 = new QPushButton(page);
        timesutton1->setObjectName("timesutton1");
        sizePolicy1.setHeightForWidth(timesutton1->sizePolicy().hasHeightForWidth());
        timesutton1->setSizePolicy(sizePolicy1);
        timesutton1->setFont(font);

        gridLayout_2->addWidget(timesutton1, 1, 3, 1, 1);

        sixButton1 = new QPushButton(page);
        sixButton1->setObjectName("sixButton1");
        sizePolicy1.setHeightForWidth(sixButton1->sizePolicy().hasHeightForWidth());
        sixButton1->setSizePolicy(sizePolicy1);
        sixButton1->setFont(font);

        gridLayout_2->addWidget(sixButton1, 2, 2, 1, 1);

        twoButton1 = new QPushButton(page);
        twoButton1->setObjectName("twoButton1");
        sizePolicy1.setHeightForWidth(twoButton1->sizePolicy().hasHeightForWidth());
        twoButton1->setSizePolicy(sizePolicy1);
        twoButton1->setFont(font);

        gridLayout_2->addWidget(twoButton1, 3, 1, 1, 1);

        threeButton1 = new QPushButton(page);
        threeButton1->setObjectName("threeButton1");
        sizePolicy1.setHeightForWidth(threeButton1->sizePolicy().hasHeightForWidth());
        threeButton1->setSizePolicy(sizePolicy1);
        threeButton1->setFont(font);

        gridLayout_2->addWidget(threeButton1, 3, 2, 1, 1);

        plusButton1 = new QPushButton(page);
        plusButton1->setObjectName("plusButton1");
        sizePolicy1.setHeightForWidth(plusButton1->sizePolicy().hasHeightForWidth());
        plusButton1->setSizePolicy(sizePolicy1);
        plusButton1->setFont(font);

        gridLayout_2->addWidget(plusButton1, 3, 3, 1, 1);

        zeroButton1 = new QPushButton(page);
        zeroButton1->setObjectName("zeroButton1");
        sizePolicy1.setHeightForWidth(zeroButton1->sizePolicy().hasHeightForWidth());
        zeroButton1->setSizePolicy(sizePolicy1);
        zeroButton1->setFont(font);

        gridLayout_2->addWidget(zeroButton1, 4, 1, 1, 1);

        commaButton1 = new QPushButton(page);
        commaButton1->setObjectName("commaButton1");
        sizePolicy1.setHeightForWidth(commaButton1->sizePolicy().hasHeightForWidth());
        commaButton1->setSizePolicy(sizePolicy1);
        commaButton1->setFont(font);

        gridLayout_2->addWidget(commaButton1, 4, 2, 1, 1);

        equalButton1 = new QPushButton(page);
        equalButton1->setObjectName("equalButton1");
        sizePolicy1.setHeightForWidth(equalButton1->sizePolicy().hasHeightForWidth());
        equalButton1->setSizePolicy(sizePolicy1);
        equalButton1->setFont(font);

        gridLayout_2->addWidget(equalButton1, 4, 3, 1, 1);


        gridLayout_3->addLayout(gridLayout_2, 0, 0, 1, 1);

        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName("page_2");
        gridLayout_5 = new QGridLayout(page_2);
        gridLayout_5->setObjectName("gridLayout_5");
        gridLayout_4 = new QGridLayout();
        gridLayout_4->setObjectName("gridLayout_4");
        changeLayout2 = new QPushButton(page_2);
        changeLayout2->setObjectName("changeLayout2");
        sizePolicy1.setHeightForWidth(changeLayout2->sizePolicy().hasHeightForWidth());
        changeLayout2->setSizePolicy(sizePolicy1);
        QFont font1;
        font1.setPointSize(15);
        changeLayout2->setFont(font1);

        gridLayout_4->addWidget(changeLayout2, 5, 1, 1, 1);

        sixButton2 = new QPushButton(page_2);
        sixButton2->setObjectName("sixButton2");
        sizePolicy1.setHeightForWidth(sixButton2->sizePolicy().hasHeightForWidth());
        sixButton2->setSizePolicy(sizePolicy1);
        sixButton2->setFont(font1);

        gridLayout_4->addWidget(sixButton2, 3, 4, 1, 1);

        equalButton2 = new QPushButton(page_2);
        equalButton2->setObjectName("equalButton2");
        sizePolicy1.setHeightForWidth(equalButton2->sizePolicy().hasHeightForWidth());
        equalButton2->setSizePolicy(sizePolicy1);
        equalButton2->setFont(font1);

        gridLayout_4->addWidget(equalButton2, 5, 5, 1, 1);

        piButton2 = new QPushButton(page_2);
        piButton2->setObjectName("piButton2");
        sizePolicy1.setHeightForWidth(piButton2->sizePolicy().hasHeightForWidth());
        piButton2->setSizePolicy(sizePolicy1);
        piButton2->setFont(font1);

        gridLayout_4->addWidget(piButton2, 4, 1, 1, 1);

        zeroButton2 = new QPushButton(page_2);
        zeroButton2->setObjectName("zeroButton2");
        sizePolicy1.setHeightForWidth(zeroButton2->sizePolicy().hasHeightForWidth());
        zeroButton2->setSizePolicy(sizePolicy1);
        zeroButton2->setFont(font1);

        gridLayout_4->addWidget(zeroButton2, 5, 3, 1, 1);

        twoButton2 = new QPushButton(page_2);
        twoButton2->setObjectName("twoButton2");
        sizePolicy1.setHeightForWidth(twoButton2->sizePolicy().hasHeightForWidth());
        twoButton2->setSizePolicy(sizePolicy1);
        twoButton2->setFont(font1);

        gridLayout_4->addWidget(twoButton2, 4, 3, 1, 1);

        fiveButton2 = new QPushButton(page_2);
        fiveButton2->setObjectName("fiveButton2");
        sizePolicy1.setHeightForWidth(fiveButton2->sizePolicy().hasHeightForWidth());
        fiveButton2->setSizePolicy(sizePolicy1);
        fiveButton2->setFont(font1);

        gridLayout_4->addWidget(fiveButton2, 3, 3, 1, 1);

        naturalLogButton2 = new QPushButton(page_2);
        naturalLogButton2->setObjectName("naturalLogButton2");
        sizePolicy1.setHeightForWidth(naturalLogButton2->sizePolicy().hasHeightForWidth());
        naturalLogButton2->setSizePolicy(sizePolicy1);
        naturalLogButton2->setFont(font1);

        gridLayout_4->addWidget(naturalLogButton2, 0, 3, 1, 1);

        closingParenthesisButton2 = new QPushButton(page_2);
        closingParenthesisButton2->setObjectName("closingParenthesisButton2");
        sizePolicy1.setHeightForWidth(closingParenthesisButton2->sizePolicy().hasHeightForWidth());
        closingParenthesisButton2->setSizePolicy(sizePolicy1);
        closingParenthesisButton2->setFont(font1);

        gridLayout_4->addWidget(closingParenthesisButton2, 0, 5, 1, 1);

        perCentButton2 = new QPushButton(page_2);
        perCentButton2->setObjectName("perCentButton2");
        sizePolicy1.setHeightForWidth(perCentButton2->sizePolicy().hasHeightForWidth());
        perCentButton2->setSizePolicy(sizePolicy1);
        perCentButton2->setFont(font1);

        gridLayout_4->addWidget(perCentButton2, 1, 4, 1, 1);

        fourButton2 = new QPushButton(page_2);
        fourButton2->setObjectName("fourButton2");
        sizePolicy1.setHeightForWidth(fourButton2->sizePolicy().hasHeightForWidth());
        fourButton2->setSizePolicy(sizePolicy1);
        fourButton2->setFont(font1);

        gridLayout_4->addWidget(fourButton2, 3, 2, 1, 1);

        threeButton2 = new QPushButton(page_2);
        threeButton2->setObjectName("threeButton2");
        sizePolicy1.setHeightForWidth(threeButton2->sizePolicy().hasHeightForWidth());
        threeButton2->setSizePolicy(sizePolicy1);
        threeButton2->setFont(font1);

        gridLayout_4->addWidget(threeButton2, 4, 4, 1, 1);

        commaButton2 = new QPushButton(page_2);
        commaButton2->setObjectName("commaButton2");
        sizePolicy1.setHeightForWidth(commaButton2->sizePolicy().hasHeightForWidth());
        commaButton2->setSizePolicy(sizePolicy1);
        commaButton2->setFont(font1);

        gridLayout_4->addWidget(commaButton2, 5, 4, 1, 1);

        logButton2 = new QPushButton(page_2);
        logButton2->setObjectName("logButton2");
        sizePolicy1.setHeightForWidth(logButton2->sizePolicy().hasHeightForWidth());
        logButton2->setSizePolicy(sizePolicy1);
        logButton2->setFont(font1);

        gridLayout_4->addWidget(logButton2, 0, 2, 1, 1);

        sevenButton2 = new QPushButton(page_2);
        sevenButton2->setObjectName("sevenButton2");
        sizePolicy1.setHeightForWidth(sevenButton2->sizePolicy().hasHeightForWidth());
        sevenButton2->setSizePolicy(sizePolicy1);
        sevenButton2->setFont(font1);

        gridLayout_4->addWidget(sevenButton2, 2, 2, 1, 1);

        exponentialButton2 = new QPushButton(page_2);
        exponentialButton2->setObjectName("exponentialButton2");
        sizePolicy1.setHeightForWidth(exponentialButton2->sizePolicy().hasHeightForWidth());
        exponentialButton2->setSizePolicy(sizePolicy1);
        exponentialButton2->setFont(font1);

        gridLayout_4->addWidget(exponentialButton2, 5, 2, 1, 1);

        oneButton2 = new QPushButton(page_2);
        oneButton2->setObjectName("oneButton2");
        sizePolicy1.setHeightForWidth(oneButton2->sizePolicy().hasHeightForWidth());
        oneButton2->setSizePolicy(sizePolicy1);
        oneButton2->setFont(font1);

        gridLayout_4->addWidget(oneButton2, 4, 2, 1, 1);

        divideButton2 = new QPushButton(page_2);
        divideButton2->setObjectName("divideButton2");
        sizePolicy1.setHeightForWidth(divideButton2->sizePolicy().hasHeightForWidth());
        divideButton2->setSizePolicy(sizePolicy1);
        divideButton2->setFont(font1);

        gridLayout_4->addWidget(divideButton2, 1, 5, 1, 1);

        plusButton2 = new QPushButton(page_2);
        plusButton2->setObjectName("plusButton2");
        sizePolicy1.setHeightForWidth(plusButton2->sizePolicy().hasHeightForWidth());
        plusButton2->setSizePolicy(sizePolicy1);
        plusButton2->setFont(font1);

        gridLayout_4->addWidget(plusButton2, 4, 5, 1, 1);

        minusButton2 = new QPushButton(page_2);
        minusButton2->setObjectName("minusButton2");
        sizePolicy1.setHeightForWidth(minusButton2->sizePolicy().hasHeightForWidth());
        minusButton2->setSizePolicy(sizePolicy1);
        minusButton2->setFont(font1);

        gridLayout_4->addWidget(minusButton2, 3, 5, 1, 1);

        openingParenthesisButton2 = new QPushButton(page_2);
        openingParenthesisButton2->setObjectName("openingParenthesisButton2");
        sizePolicy1.setHeightForWidth(openingParenthesisButton2->sizePolicy().hasHeightForWidth());
        openingParenthesisButton2->setSizePolicy(sizePolicy1);
        openingParenthesisButton2->setFont(font1);

        gridLayout_4->addWidget(openingParenthesisButton2, 0, 4, 1, 1);

        backSpaceButton2 = new QPushButton(page_2);
        backSpaceButton2->setObjectName("backSpaceButton2");
        sizePolicy1.setHeightForWidth(backSpaceButton2->sizePolicy().hasHeightForWidth());
        backSpaceButton2->setSizePolicy(sizePolicy1);
        backSpaceButton2->setFont(font1);

        gridLayout_4->addWidget(backSpaceButton2, 1, 3, 1, 1);

        timesButton2 = new QPushButton(page_2);
        timesButton2->setObjectName("timesButton2");
        sizePolicy1.setHeightForWidth(timesButton2->sizePolicy().hasHeightForWidth());
        timesButton2->setSizePolicy(sizePolicy1);
        timesButton2->setFont(font1);

        gridLayout_4->addWidget(timesButton2, 2, 5, 1, 1);

        inverseButton2 = new QPushButton(page_2);
        inverseButton2->setObjectName("inverseButton2");
        sizePolicy1.setHeightForWidth(inverseButton2->sizePolicy().hasHeightForWidth());
        inverseButton2->setSizePolicy(sizePolicy1);
        inverseButton2->setFont(font1);

        gridLayout_4->addWidget(inverseButton2, 3, 1, 1, 1);

        allClearButton2 = new QPushButton(page_2);
        allClearButton2->setObjectName("allClearButton2");
        sizePolicy1.setHeightForWidth(allClearButton2->sizePolicy().hasHeightForWidth());
        allClearButton2->setSizePolicy(sizePolicy1);
        allClearButton2->setFont(font1);

        gridLayout_4->addWidget(allClearButton2, 1, 2, 1, 1);

        eightButton2 = new QPushButton(page_2);
        eightButton2->setObjectName("eightButton2");
        sizePolicy1.setHeightForWidth(eightButton2->sizePolicy().hasHeightForWidth());
        eightButton2->setSizePolicy(sizePolicy1);
        eightButton2->setFont(font1);

        gridLayout_4->addWidget(eightButton2, 2, 3, 1, 1);

        nineButton2 = new QPushButton(page_2);
        nineButton2->setObjectName("nineButton2");
        sizePolicy1.setHeightForWidth(nineButton2->sizePolicy().hasHeightForWidth());
        nineButton2->setSizePolicy(sizePolicy1);
        nineButton2->setFont(font1);

        gridLayout_4->addWidget(nineButton2, 2, 4, 1, 1);

        squareRootButton2 = new QPushButton(page_2);
        squareRootButton2->setObjectName("squareRootButton2");
        sizePolicy1.setHeightForWidth(squareRootButton2->sizePolicy().hasHeightForWidth());
        squareRootButton2->setSizePolicy(sizePolicy1);
        squareRootButton2->setFont(font1);

        gridLayout_4->addWidget(squareRootButton2, 2, 1, 1, 1);

        powerButton2 = new QPushButton(page_2);
        powerButton2->setObjectName("powerButton2");
        sizePolicy1.setHeightForWidth(powerButton2->sizePolicy().hasHeightForWidth());
        powerButton2->setSizePolicy(sizePolicy1);
        powerButton2->setFont(font1);

        gridLayout_4->addWidget(powerButton2, 1, 1, 1, 1);


        gridLayout_5->addLayout(gridLayout_4, 0, 0, 1, 1);

        stackedWidget->addWidget(page_2);
        verticalLayoutWidget = new QWidget(calculatorTabWidget);
        verticalLayoutWidget->setObjectName("verticalLayoutWidget");
        verticalLayoutWidget->setGeometry(QRect(9, 9, 361, 141));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        oldCalculation = new QLabel(verticalLayoutWidget);
        oldCalculation->setObjectName("oldCalculation");
        oldCalculation->setFont(font1);
        oldCalculation->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        verticalLayout->addWidget(oldCalculation);

        currentCalculation = new QLabel(verticalLayoutWidget);
        currentCalculation->setObjectName("currentCalculation");
        QFont font2;
        font2.setPointSize(30);
        currentCalculation->setFont(font2);
        currentCalculation->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        verticalLayout->addWidget(currentCalculation);

        tabWidget->addTab(calculatorTabWidget, QString());
        converterTabWidget = new QWidget();
        converterTabWidget->setObjectName("converterTabWidget");
        gridLayout_7 = new QGridLayout(converterTabWidget);
        gridLayout_7->setObjectName("gridLayout_7");
        comboBox = new QComboBox(converterTabWidget);
        comboBox->setObjectName("comboBox");

        gridLayout_7->addWidget(comboBox, 0, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        inputConverter = new QLabel(converterTabWidget);
        inputConverter->setObjectName("inputConverter");
        inputConverter->setMinimumSize(QSize(0, 50));
        inputConverter->setMaximumSize(QSize(16777215, 50));
        QFont font3;
        font3.setPointSize(25);
        inputConverter->setFont(font3);
        inputConverter->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(inputConverter);

        outputConverter = new QLabel(converterTabWidget);
        outputConverter->setObjectName("outputConverter");
        outputConverter->setMinimumSize(QSize(0, 50));
        outputConverter->setMaximumSize(QSize(16777215, 50));
        outputConverter->setFont(font3);
        outputConverter->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(outputConverter);


        gridLayout_7->addLayout(horizontalLayout, 1, 0, 1, 1);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName("gridLayout");
        pushButton_10 = new QPushButton(converterTabWidget);
        pushButton_10->setObjectName("pushButton_10");
        sizePolicy1.setHeightForWidth(pushButton_10->sizePolicy().hasHeightForWidth());
        pushButton_10->setSizePolicy(sizePolicy1);
        QFont font4;
        font4.setPointSize(35);
        pushButton_10->setFont(font4);

        gridLayout->addWidget(pushButton_10, 3, 1, 1, 1);

        pushButton_11 = new QPushButton(converterTabWidget);
        pushButton_11->setObjectName("pushButton_11");
        sizePolicy1.setHeightForWidth(pushButton_11->sizePolicy().hasHeightForWidth());
        pushButton_11->setSizePolicy(sizePolicy1);
        pushButton_11->setFont(font4);

        gridLayout->addWidget(pushButton_11, 4, 1, 1, 1);

        pushButton_3 = new QPushButton(converterTabWidget);
        pushButton_3->setObjectName("pushButton_3");
        sizePolicy1.setHeightForWidth(pushButton_3->sizePolicy().hasHeightForWidth());
        pushButton_3->setSizePolicy(sizePolicy1);
        pushButton_3->setFont(font4);

        gridLayout->addWidget(pushButton_3, 3, 0, 1, 1);

        pushButton_13 = new QPushButton(converterTabWidget);
        pushButton_13->setObjectName("pushButton_13");
        sizePolicy1.setHeightForWidth(pushButton_13->sizePolicy().hasHeightForWidth());
        pushButton_13->setSizePolicy(sizePolicy1);
        pushButton_13->setFont(font4);

        gridLayout->addWidget(pushButton_13, 0, 0, 1, 1);

        pushButton_2 = new QPushButton(converterTabWidget);
        pushButton_2->setObjectName("pushButton_2");
        sizePolicy1.setHeightForWidth(pushButton_2->sizePolicy().hasHeightForWidth());
        pushButton_2->setSizePolicy(sizePolicy1);
        pushButton_2->setFont(font4);

        gridLayout->addWidget(pushButton_2, 2, 0, 1, 1);

        pushButton_4 = new QPushButton(converterTabWidget);
        pushButton_4->setObjectName("pushButton_4");
        sizePolicy1.setHeightForWidth(pushButton_4->sizePolicy().hasHeightForWidth());
        pushButton_4->setSizePolicy(sizePolicy1);
        pushButton_4->setFont(font4);

        gridLayout->addWidget(pushButton_4, 4, 0, 1, 1);

        pushButton_9 = new QPushButton(converterTabWidget);
        pushButton_9->setObjectName("pushButton_9");
        sizePolicy1.setHeightForWidth(pushButton_9->sizePolicy().hasHeightForWidth());
        pushButton_9->setSizePolicy(sizePolicy1);
        pushButton_9->setFont(font4);

        gridLayout->addWidget(pushButton_9, 3, 2, 1, 1);

        pushButton_5 = new QPushButton(converterTabWidget);
        pushButton_5->setObjectName("pushButton_5");
        sizePolicy1.setHeightForWidth(pushButton_5->sizePolicy().hasHeightForWidth());
        pushButton_5->setSizePolicy(sizePolicy1);
        pushButton_5->setFont(font4);

        gridLayout->addWidget(pushButton_5, 1, 1, 1, 1);

        pushButton_14 = new QPushButton(converterTabWidget);
        pushButton_14->setObjectName("pushButton_14");
        sizePolicy1.setHeightForWidth(pushButton_14->sizePolicy().hasHeightForWidth());
        pushButton_14->setSizePolicy(sizePolicy1);
        pushButton_14->setFont(font4);

        gridLayout->addWidget(pushButton_14, 4, 2, 1, 1);

        pushButton_8 = new QPushButton(converterTabWidget);
        pushButton_8->setObjectName("pushButton_8");
        sizePolicy1.setHeightForWidth(pushButton_8->sizePolicy().hasHeightForWidth());
        pushButton_8->setSizePolicy(sizePolicy1);
        pushButton_8->setFont(font4);

        gridLayout->addWidget(pushButton_8, 2, 2, 1, 1);

        pushButton_7 = new QPushButton(converterTabWidget);
        pushButton_7->setObjectName("pushButton_7");
        sizePolicy1.setHeightForWidth(pushButton_7->sizePolicy().hasHeightForWidth());
        pushButton_7->setSizePolicy(sizePolicy1);
        pushButton_7->setFont(font4);

        gridLayout->addWidget(pushButton_7, 2, 1, 1, 1);

        pushButton_6 = new QPushButton(converterTabWidget);
        pushButton_6->setObjectName("pushButton_6");
        sizePolicy1.setHeightForWidth(pushButton_6->sizePolicy().hasHeightForWidth());
        pushButton_6->setSizePolicy(sizePolicy1);
        pushButton_6->setFont(font4);

        gridLayout->addWidget(pushButton_6, 1, 2, 1, 1);

        pushButton_12 = new QPushButton(converterTabWidget);
        pushButton_12->setObjectName("pushButton_12");
        sizePolicy1.setHeightForWidth(pushButton_12->sizePolicy().hasHeightForWidth());
        pushButton_12->setSizePolicy(sizePolicy1);
        pushButton_12->setFont(font4);

        gridLayout->addWidget(pushButton_12, 0, 2, 1, 1);

        pushButton = new QPushButton(converterTabWidget);
        pushButton->setObjectName("pushButton");
        sizePolicy1.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy1);
        pushButton->setFont(font4);

        gridLayout->addWidget(pushButton, 1, 0, 1, 1);


        gridLayout_7->addLayout(gridLayout, 2, 0, 1, 1);

        tabWidget->addTab(converterTabWidget, QString());
        historyTabWidget = new QWidget();
        historyTabWidget->setObjectName("historyTabWidget");
        gridLayout_6 = new QGridLayout(historyTabWidget);
        gridLayout_6->setObjectName("gridLayout_6");
        scrollArea = new QScrollArea(historyTabWidget);
        scrollArea->setObjectName("scrollArea");
        scrollArea->setWidgetResizable(true);
        historyScrollAreaWidgetContents = new QWidget();
        historyScrollAreaWidgetContents->setObjectName("historyScrollAreaWidgetContents");
        historyScrollAreaWidgetContents->setGeometry(QRect(0, 0, 358, 579));
        scrollArea->setWidget(historyScrollAreaWidgetContents);

        gridLayout_6->addWidget(scrollArea, 0, 0, 1, 1);

        tabWidget->addTab(historyTabWidget, QString());

        gridLayout_8->addWidget(tabWidget, 0, 0, 1, 1);

        Calculator->setCentralWidget(centralwidget);

        retranslateUi(Calculator);

        tabWidget->setCurrentIndex(1);
        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(Calculator);
    } // setupUi

    void retranslateUi(QMainWindow *Calculator)
    {
        Calculator->setWindowTitle(QCoreApplication::translate("Calculator", "Calculator", nullptr));
#if QT_CONFIG(accessibility)
        tabWidget->setAccessibleName(QString());
#endif // QT_CONFIG(accessibility)
#if QT_CONFIG(whatsthis)
        calculatorTabWidget->setWhatsThis(QString());
#endif // QT_CONFIG(whatsthis)
        changeLayoutButton1->setText(QCoreApplication::translate("Calculator", "<[]>", nullptr));
        backspaceButton1->setText(QCoreApplication::translate("Calculator", "<-", nullptr));
#if QT_CONFIG(shortcut)
        backspaceButton1->setShortcut(QCoreApplication::translate("Calculator", "Backspace", nullptr));
#endif // QT_CONFIG(shortcut)
        fiveButton1->setText(QCoreApplication::translate("Calculator", "5", nullptr));
#if QT_CONFIG(shortcut)
        fiveButton1->setShortcut(QCoreApplication::translate("Calculator", "5", nullptr));
#endif // QT_CONFIG(shortcut)
        perCentButton1->setText(QCoreApplication::translate("Calculator", "%", nullptr));
#if QT_CONFIG(shortcut)
        perCentButton1->setShortcut(QCoreApplication::translate("Calculator", "%", nullptr));
#endif // QT_CONFIG(shortcut)
        ninceButton1->setText(QCoreApplication::translate("Calculator", "9", nullptr));
#if QT_CONFIG(shortcut)
        ninceButton1->setShortcut(QCoreApplication::translate("Calculator", "9", nullptr));
#endif // QT_CONFIG(shortcut)
        eightButton1->setText(QCoreApplication::translate("Calculator", "8", nullptr));
#if QT_CONFIG(shortcut)
        eightButton1->setShortcut(QCoreApplication::translate("Calculator", "8", nullptr));
#endif // QT_CONFIG(shortcut)
        divideButton1->setText(QCoreApplication::translate("Calculator", "/", nullptr));
#if QT_CONFIG(shortcut)
        divideButton1->setShortcut(QCoreApplication::translate("Calculator", "/", nullptr));
#endif // QT_CONFIG(shortcut)
        fourButton1->setText(QCoreApplication::translate("Calculator", "4", nullptr));
#if QT_CONFIG(shortcut)
        fourButton1->setShortcut(QCoreApplication::translate("Calculator", "4", nullptr));
#endif // QT_CONFIG(shortcut)
        allClearButton1->setText(QCoreApplication::translate("Calculator", "AC", nullptr));
#if QT_CONFIG(shortcut)
        allClearButton1->setShortcut(QCoreApplication::translate("Calculator", "Ctrl+Backspace", nullptr));
#endif // QT_CONFIG(shortcut)
        minusButton1->setText(QCoreApplication::translate("Calculator", "-", nullptr));
#if QT_CONFIG(shortcut)
        minusButton1->setShortcut(QCoreApplication::translate("Calculator", "-", nullptr));
#endif // QT_CONFIG(shortcut)
        oneButton1->setText(QCoreApplication::translate("Calculator", "1", nullptr));
#if QT_CONFIG(shortcut)
        oneButton1->setShortcut(QCoreApplication::translate("Calculator", "1", nullptr));
#endif // QT_CONFIG(shortcut)
        sevenButton1->setText(QCoreApplication::translate("Calculator", "7", nullptr));
#if QT_CONFIG(shortcut)
        sevenButton1->setShortcut(QCoreApplication::translate("Calculator", "7", nullptr));
#endif // QT_CONFIG(shortcut)
        timesutton1->setText(QCoreApplication::translate("Calculator", "x", nullptr));
#if QT_CONFIG(shortcut)
        timesutton1->setShortcut(QCoreApplication::translate("Calculator", "*", nullptr));
#endif // QT_CONFIG(shortcut)
        sixButton1->setText(QCoreApplication::translate("Calculator", "6", nullptr));
#if QT_CONFIG(shortcut)
        sixButton1->setShortcut(QCoreApplication::translate("Calculator", "6", nullptr));
#endif // QT_CONFIG(shortcut)
        twoButton1->setText(QCoreApplication::translate("Calculator", "2", nullptr));
#if QT_CONFIG(shortcut)
        twoButton1->setShortcut(QCoreApplication::translate("Calculator", "2", nullptr));
#endif // QT_CONFIG(shortcut)
        threeButton1->setText(QCoreApplication::translate("Calculator", "3", nullptr));
#if QT_CONFIG(shortcut)
        threeButton1->setShortcut(QCoreApplication::translate("Calculator", "3", nullptr));
#endif // QT_CONFIG(shortcut)
        plusButton1->setText(QCoreApplication::translate("Calculator", "+", nullptr));
#if QT_CONFIG(shortcut)
        plusButton1->setShortcut(QCoreApplication::translate("Calculator", "+", nullptr));
#endif // QT_CONFIG(shortcut)
        zeroButton1->setText(QCoreApplication::translate("Calculator", "0", nullptr));
#if QT_CONFIG(shortcut)
        zeroButton1->setShortcut(QCoreApplication::translate("Calculator", "0", nullptr));
#endif // QT_CONFIG(shortcut)
        commaButton1->setText(QCoreApplication::translate("Calculator", ".", nullptr));
#if QT_CONFIG(shortcut)
        commaButton1->setShortcut(QCoreApplication::translate("Calculator", ".", nullptr));
#endif // QT_CONFIG(shortcut)
        equalButton1->setText(QCoreApplication::translate("Calculator", "=", nullptr));
#if QT_CONFIG(shortcut)
        equalButton1->setShortcut(QCoreApplication::translate("Calculator", "Return", nullptr));
#endif // QT_CONFIG(shortcut)
        changeLayout2->setText(QCoreApplication::translate("Calculator", ">[]<", nullptr));
        sixButton2->setText(QCoreApplication::translate("Calculator", "6", nullptr));
#if QT_CONFIG(shortcut)
        sixButton2->setShortcut(QCoreApplication::translate("Calculator", "6", nullptr));
#endif // QT_CONFIG(shortcut)
        equalButton2->setText(QCoreApplication::translate("Calculator", "=", nullptr));
#if QT_CONFIG(shortcut)
        equalButton2->setShortcut(QCoreApplication::translate("Calculator", "Return", nullptr));
#endif // QT_CONFIG(shortcut)
        piButton2->setText(QCoreApplication::translate("Calculator", "pi", nullptr));
#if QT_CONFIG(shortcut)
        piButton2->setShortcut(QCoreApplication::translate("Calculator", "P", nullptr));
#endif // QT_CONFIG(shortcut)
        zeroButton2->setText(QCoreApplication::translate("Calculator", "0", nullptr));
#if QT_CONFIG(shortcut)
        zeroButton2->setShortcut(QCoreApplication::translate("Calculator", "0", nullptr));
#endif // QT_CONFIG(shortcut)
        twoButton2->setText(QCoreApplication::translate("Calculator", "2", nullptr));
#if QT_CONFIG(shortcut)
        twoButton2->setShortcut(QCoreApplication::translate("Calculator", "2", nullptr));
#endif // QT_CONFIG(shortcut)
        fiveButton2->setText(QCoreApplication::translate("Calculator", "5", nullptr));
#if QT_CONFIG(shortcut)
        fiveButton2->setShortcut(QCoreApplication::translate("Calculator", "5", nullptr));
#endif // QT_CONFIG(shortcut)
        naturalLogButton2->setText(QCoreApplication::translate("Calculator", "ln", nullptr));
#if QT_CONFIG(shortcut)
        naturalLogButton2->setShortcut(QCoreApplication::translate("Calculator", "L, N", nullptr));
#endif // QT_CONFIG(shortcut)
        closingParenthesisButton2->setText(QCoreApplication::translate("Calculator", ")", nullptr));
#if QT_CONFIG(shortcut)
        closingParenthesisButton2->setShortcut(QCoreApplication::translate("Calculator", ")", nullptr));
#endif // QT_CONFIG(shortcut)
        perCentButton2->setText(QCoreApplication::translate("Calculator", "%", nullptr));
#if QT_CONFIG(shortcut)
        perCentButton2->setShortcut(QCoreApplication::translate("Calculator", "%", nullptr));
#endif // QT_CONFIG(shortcut)
        fourButton2->setText(QCoreApplication::translate("Calculator", "4", nullptr));
#if QT_CONFIG(shortcut)
        fourButton2->setShortcut(QCoreApplication::translate("Calculator", "4", nullptr));
#endif // QT_CONFIG(shortcut)
        threeButton2->setText(QCoreApplication::translate("Calculator", "3", nullptr));
#if QT_CONFIG(shortcut)
        threeButton2->setShortcut(QCoreApplication::translate("Calculator", "3", nullptr));
#endif // QT_CONFIG(shortcut)
        commaButton2->setText(QCoreApplication::translate("Calculator", ".", nullptr));
#if QT_CONFIG(shortcut)
        commaButton2->setShortcut(QCoreApplication::translate("Calculator", ".", nullptr));
#endif // QT_CONFIG(shortcut)
        logButton2->setText(QCoreApplication::translate("Calculator", "lg", nullptr));
#if QT_CONFIG(shortcut)
        logButton2->setShortcut(QCoreApplication::translate("Calculator", "L, G", nullptr));
#endif // QT_CONFIG(shortcut)
        sevenButton2->setText(QCoreApplication::translate("Calculator", "7", nullptr));
#if QT_CONFIG(shortcut)
        sevenButton2->setShortcut(QCoreApplication::translate("Calculator", "7", nullptr));
#endif // QT_CONFIG(shortcut)
        exponentialButton2->setText(QCoreApplication::translate("Calculator", "e", nullptr));
#if QT_CONFIG(shortcut)
        exponentialButton2->setShortcut(QCoreApplication::translate("Calculator", "E", nullptr));
#endif // QT_CONFIG(shortcut)
        oneButton2->setText(QCoreApplication::translate("Calculator", "1", nullptr));
#if QT_CONFIG(shortcut)
        oneButton2->setShortcut(QCoreApplication::translate("Calculator", "1", nullptr));
#endif // QT_CONFIG(shortcut)
        divideButton2->setText(QCoreApplication::translate("Calculator", "/", nullptr));
#if QT_CONFIG(shortcut)
        divideButton2->setShortcut(QCoreApplication::translate("Calculator", "/", nullptr));
#endif // QT_CONFIG(shortcut)
        plusButton2->setText(QCoreApplication::translate("Calculator", "+", nullptr));
#if QT_CONFIG(shortcut)
        plusButton2->setShortcut(QCoreApplication::translate("Calculator", "+", nullptr));
#endif // QT_CONFIG(shortcut)
        minusButton2->setText(QCoreApplication::translate("Calculator", "-", nullptr));
#if QT_CONFIG(shortcut)
        minusButton2->setShortcut(QCoreApplication::translate("Calculator", "-", nullptr));
#endif // QT_CONFIG(shortcut)
        openingParenthesisButton2->setText(QCoreApplication::translate("Calculator", "(", nullptr));
#if QT_CONFIG(shortcut)
        openingParenthesisButton2->setShortcut(QCoreApplication::translate("Calculator", "(", nullptr));
#endif // QT_CONFIG(shortcut)
        backSpaceButton2->setText(QCoreApplication::translate("Calculator", "<-", nullptr));
#if QT_CONFIG(shortcut)
        backSpaceButton2->setShortcut(QCoreApplication::translate("Calculator", "Backspace", nullptr));
#endif // QT_CONFIG(shortcut)
        timesButton2->setText(QCoreApplication::translate("Calculator", "x", nullptr));
#if QT_CONFIG(shortcut)
        timesButton2->setShortcut(QCoreApplication::translate("Calculator", "*", nullptr));
#endif // QT_CONFIG(shortcut)
        inverseButton2->setText(QCoreApplication::translate("Calculator", "1/x", nullptr));
#if QT_CONFIG(shortcut)
        inverseButton2->setShortcut(QCoreApplication::translate("Calculator", "C", nullptr));
#endif // QT_CONFIG(shortcut)
        allClearButton2->setText(QCoreApplication::translate("Calculator", "AC", nullptr));
#if QT_CONFIG(shortcut)
        allClearButton2->setShortcut(QCoreApplication::translate("Calculator", "Ctrl+Backspace", nullptr));
#endif // QT_CONFIG(shortcut)
        eightButton2->setText(QCoreApplication::translate("Calculator", "8", nullptr));
#if QT_CONFIG(shortcut)
        eightButton2->setShortcut(QCoreApplication::translate("Calculator", "8", nullptr));
#endif // QT_CONFIG(shortcut)
        nineButton2->setText(QCoreApplication::translate("Calculator", "9", nullptr));
#if QT_CONFIG(shortcut)
        nineButton2->setShortcut(QCoreApplication::translate("Calculator", "9", nullptr));
#endif // QT_CONFIG(shortcut)
        squareRootButton2->setText(QCoreApplication::translate("Calculator", "sqrt", nullptr));
        powerButton2->setText(QCoreApplication::translate("Calculator", "x^y", nullptr));
        oldCalculation->setText(QString());
        currentCalculation->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(calculatorTabWidget), QCoreApplication::translate("Calculator", "Calculator", nullptr));
        inputConverter->setText(QString());
        outputConverter->setText(QString());
        pushButton_10->setText(QCoreApplication::translate("Calculator", "2", nullptr));
#if QT_CONFIG(shortcut)
        pushButton_10->setShortcut(QCoreApplication::translate("Calculator", "2", nullptr));
#endif // QT_CONFIG(shortcut)
        pushButton_11->setText(QCoreApplication::translate("Calculator", "0", nullptr));
#if QT_CONFIG(shortcut)
        pushButton_11->setShortcut(QCoreApplication::translate("Calculator", "0", nullptr));
#endif // QT_CONFIG(shortcut)
        pushButton_3->setText(QCoreApplication::translate("Calculator", "1", nullptr));
#if QT_CONFIG(shortcut)
        pushButton_3->setShortcut(QCoreApplication::translate("Calculator", "1", nullptr));
#endif // QT_CONFIG(shortcut)
        pushButton_13->setText(QCoreApplication::translate("Calculator", "AC", nullptr));
#if QT_CONFIG(shortcut)
        pushButton_13->setShortcut(QCoreApplication::translate("Calculator", "Ctrl+Backspace", nullptr));
#endif // QT_CONFIG(shortcut)
        pushButton_2->setText(QCoreApplication::translate("Calculator", "4", nullptr));
#if QT_CONFIG(shortcut)
        pushButton_2->setShortcut(QCoreApplication::translate("Calculator", "4", nullptr));
#endif // QT_CONFIG(shortcut)
        pushButton_4->setText(QCoreApplication::translate("Calculator", "</>", nullptr));
#if QT_CONFIG(shortcut)
        pushButton_4->setShortcut(QCoreApplication::translate("Calculator", "Return", nullptr));
#endif // QT_CONFIG(shortcut)
        pushButton_9->setText(QCoreApplication::translate("Calculator", "3", nullptr));
#if QT_CONFIG(shortcut)
        pushButton_9->setShortcut(QCoreApplication::translate("Calculator", "3", nullptr));
#endif // QT_CONFIG(shortcut)
        pushButton_5->setText(QCoreApplication::translate("Calculator", "8", nullptr));
#if QT_CONFIG(shortcut)
        pushButton_5->setShortcut(QCoreApplication::translate("Calculator", "8", nullptr));
#endif // QT_CONFIG(shortcut)
        pushButton_14->setText(QCoreApplication::translate("Calculator", ".", nullptr));
#if QT_CONFIG(shortcut)
        pushButton_14->setShortcut(QCoreApplication::translate("Calculator", ".", nullptr));
#endif // QT_CONFIG(shortcut)
        pushButton_8->setText(QCoreApplication::translate("Calculator", "6", nullptr));
#if QT_CONFIG(shortcut)
        pushButton_8->setShortcut(QCoreApplication::translate("Calculator", "6", nullptr));
#endif // QT_CONFIG(shortcut)
        pushButton_7->setText(QCoreApplication::translate("Calculator", "5", nullptr));
#if QT_CONFIG(shortcut)
        pushButton_7->setShortcut(QCoreApplication::translate("Calculator", "5", nullptr));
#endif // QT_CONFIG(shortcut)
        pushButton_6->setText(QCoreApplication::translate("Calculator", "9", nullptr));
#if QT_CONFIG(shortcut)
        pushButton_6->setShortcut(QCoreApplication::translate("Calculator", "9", nullptr));
#endif // QT_CONFIG(shortcut)
        pushButton_12->setText(QCoreApplication::translate("Calculator", "<-", nullptr));
#if QT_CONFIG(shortcut)
        pushButton_12->setShortcut(QCoreApplication::translate("Calculator", "Backspace", nullptr));
#endif // QT_CONFIG(shortcut)
        pushButton->setText(QCoreApplication::translate("Calculator", "7", nullptr));
#if QT_CONFIG(shortcut)
        pushButton->setShortcut(QCoreApplication::translate("Calculator", "7", nullptr));
#endif // QT_CONFIG(shortcut)
        tabWidget->setTabText(tabWidget->indexOf(converterTabWidget), QCoreApplication::translate("Calculator", "Converter", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(historyTabWidget), QCoreApplication::translate("Calculator", "History", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Calculator: public Ui_Calculator {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CALCULATOR_H
