/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QPushButton *pushButton_clear;
    QPushButton *pushButton_multipliy;
    QPushButton *pushButton_9;
    QPushButton *pushButton_8;
    QPushButton *pushButton_7;
    QPushButton *pushButton_divide;
    QPushButton *pushButton_percent;
    QPushButton *pushButton_plusMinus;
    QPushButton *pushButton_add;
    QPushButton *pushButton_3;
    QPushButton *pushButton_2;
    QPushButton *pushButton_1;
    QPushButton *pushButton_subtract;
    QPushButton *pushButton_6;
    QPushButton *pushButton_5;
    QPushButton *pushButton_4;
    QPushButton *pushButton_equals;
    QPushButton *pushButton_decimal;
    QPushButton *pushButton_0;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(241, 371);
        MainWindow->setStyleSheet(QString::fromUtf8("QLabe{\n"
"	qgroperty-aligument: 'AlignVCenter |AlignRight';\n"
"	border: 1px solid gray;\n"
"\n"
"}\n"
"background-coler:white;"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(0, 10, 241, 61));
        label->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	qproperty-alignment: 'AlignVCenter | AlignRight';\n"
"	border: 1px solid gray;\n"
"}\n"
"background-color : white;"));
        pushButton_clear = new QPushButton(centralwidget);
        pushButton_clear->setObjectName("pushButton_clear");
        pushButton_clear->setGeometry(QRect(0, 70, 61, 61));
        pushButton_multipliy = new QPushButton(centralwidget);
        pushButton_multipliy->setObjectName("pushButton_multipliy");
        pushButton_multipliy->setGeometry(QRect(180, 130, 61, 61));
        pushButton_9 = new QPushButton(centralwidget);
        pushButton_9->setObjectName("pushButton_9");
        pushButton_9->setGeometry(QRect(120, 130, 61, 61));
        pushButton_9->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	border:1px solid gray;\n"
"}\n"
"QPushButton:pressed{\n"
"	background-color: qlineargradient(x1:0, y1:0, x2:0, y2:1,\n"
"	stop: 0 #dadbdc, stop: 1 #f6f7fa); \n"
"}"));
        pushButton_8 = new QPushButton(centralwidget);
        pushButton_8->setObjectName("pushButton_8");
        pushButton_8->setGeometry(QRect(60, 130, 61, 61));
        pushButton_8->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	border:1px solid gray;\n"
"}\n"
"QPushButton:pressed{\n"
"	background-color: qlineargradient(x1:0, y1:0, x2:0, y2:1,\n"
"	stop: 0 #dadbdc, stop: 1 #f6f7fa); \n"
"}"));
        pushButton_7 = new QPushButton(centralwidget);
        pushButton_7->setObjectName("pushButton_7");
        pushButton_7->setGeometry(QRect(0, 130, 60, 61));
        pushButton_7->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	border:1px solid gray;\n"
"}\n"
"QPushButton:pressed{\n"
"	background-color: qlineargradient(x1:0, y1:0, x2:0, y2:1,\n"
"	stop: 0 #dadbdc, stop: 1 #f6f7fa); \n"
"}"));
        pushButton_divide = new QPushButton(centralwidget);
        pushButton_divide->setObjectName("pushButton_divide");
        pushButton_divide->setGeometry(QRect(180, 70, 61, 61));
        pushButton_percent = new QPushButton(centralwidget);
        pushButton_percent->setObjectName("pushButton_percent");
        pushButton_percent->setGeometry(QRect(120, 70, 61, 61));
        pushButton_plusMinus = new QPushButton(centralwidget);
        pushButton_plusMinus->setObjectName("pushButton_plusMinus");
        pushButton_plusMinus->setGeometry(QRect(60, 70, 61, 61));
        pushButton_add = new QPushButton(centralwidget);
        pushButton_add->setObjectName("pushButton_add");
        pushButton_add->setGeometry(QRect(180, 250, 61, 61));
        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(120, 250, 61, 61));
        pushButton_3->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	border:1px solid gray;\n"
"}\n"
"QPushButton:pressed{\n"
"	background-color: qlineargradient(x1:0, y1:0, x2:0, y2:1,\n"
"	stop: 0 #dadbdc, stop: 1 #f6f7fa); \n"
"}"));
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(60, 250, 61, 61));
        pushButton_2->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	border:1px solid gray;\n"
"}\n"
"QPushButton:pressed{\n"
"	background-color: qlineargradient(x1:0, y1:0, x2:0, y2:1,\n"
"	stop: 0 #dadbdc, stop: 1 #f6f7fa); \n"
"}"));
        pushButton_1 = new QPushButton(centralwidget);
        pushButton_1->setObjectName("pushButton_1");
        pushButton_1->setGeometry(QRect(0, 250, 61, 61));
        pushButton_1->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	border:1px solid gray;\n"
"}\n"
"QPushButton:pressed{\n"
"	background-color: qlineargradient(x1:0, y1:0, x2:0, y2:1,\n"
"	stop: 0 #dadbdc, stop: 1 #f6f7fa); \n"
"}"));
        pushButton_subtract = new QPushButton(centralwidget);
        pushButton_subtract->setObjectName("pushButton_subtract");
        pushButton_subtract->setGeometry(QRect(180, 190, 61, 61));
        pushButton_6 = new QPushButton(centralwidget);
        pushButton_6->setObjectName("pushButton_6");
        pushButton_6->setGeometry(QRect(120, 190, 61, 61));
        pushButton_6->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	border:1px solid gray;\n"
"}\n"
"QPushButton:pressed{\n"
"	background-color: qlineargradient(x1:0, y1:0, x2:0, y2:1,\n"
"	stop: 0 #dadbdc, stop: 1 #f6f7fa); \n"
"}"));
        pushButton_5 = new QPushButton(centralwidget);
        pushButton_5->setObjectName("pushButton_5");
        pushButton_5->setGeometry(QRect(60, 190, 61, 61));
        pushButton_5->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	border:1px solid gray;\n"
"}\n"
"QPushButton:pressed{\n"
"	background-color: qlineargradient(x1:0, y1:0, x2:0, y2:1,\n"
"	stop: 0 #dadbdc, stop: 1 #f6f7fa); \n"
"}"));
        pushButton_4 = new QPushButton(centralwidget);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setGeometry(QRect(0, 190, 61, 61));
        pushButton_4->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	border:1px solid gray;\n"
"}\n"
"QPushButton:pressed{\n"
"	background-color: qlineargradient(x1:0, y1:0, x2:0, y2:1,\n"
"	stop: 0 #dadbdc, stop: 1 #f6f7fa); \n"
"}"));
        pushButton_equals = new QPushButton(centralwidget);
        pushButton_equals->setObjectName("pushButton_equals");
        pushButton_equals->setGeometry(QRect(180, 310, 61, 61));
        pushButton_decimal = new QPushButton(centralwidget);
        pushButton_decimal->setObjectName("pushButton_decimal");
        pushButton_decimal->setGeometry(QRect(120, 310, 61, 61));
        pushButton_0 = new QPushButton(centralwidget);
        pushButton_0->setObjectName("pushButton_0");
        pushButton_0->setGeometry(QRect(0, 310, 121, 61));
        pushButton_0->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	border:1px solid gray;\n"
"}\n"
"QPushButton:pressed{\n"
"	background-color: qlineargradient(x1:0, y1:0, x2:0, y2:1,\n"
"	stop: 0 #dadbdc, stop: 1 #f6f7fa); \n"
"}"));
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QString());
        pushButton_clear->setText(QCoreApplication::translate("MainWindow", "C", nullptr));
        pushButton_multipliy->setText(QCoreApplication::translate("MainWindow", "X", nullptr));
        pushButton_9->setText(QCoreApplication::translate("MainWindow", "9", nullptr));
        pushButton_8->setText(QCoreApplication::translate("MainWindow", "8", nullptr));
        pushButton_7->setText(QCoreApplication::translate("MainWindow", "7", nullptr));
        pushButton_divide->setText(QCoreApplication::translate("MainWindow", "/", nullptr));
        pushButton_percent->setText(QCoreApplication::translate("MainWindow", "%", nullptr));
        pushButton_plusMinus->setText(QCoreApplication::translate("MainWindow", "+/-", nullptr));
        pushButton_add->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        pushButton_3->setText(QCoreApplication::translate("MainWindow", "3", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
        pushButton_1->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        pushButton_subtract->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        pushButton_6->setText(QCoreApplication::translate("MainWindow", "6", nullptr));
        pushButton_5->setText(QCoreApplication::translate("MainWindow", "5", nullptr));
        pushButton_4->setText(QCoreApplication::translate("MainWindow", "4", nullptr));
        pushButton_equals->setText(QCoreApplication::translate("MainWindow", "=", nullptr));
        pushButton_decimal->setText(QCoreApplication::translate("MainWindow", ".", nullptr));
        pushButton_0->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
