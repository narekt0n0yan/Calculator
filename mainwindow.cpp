#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QDebug"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    connect(ui->pushButton_0, &QPushButton::released, this, [this]() { emit digit_pressed(0); });
    connect(ui->pushButton_1, &QPushButton::released, this, [this]() { emit digit_pressed(1); });
    connect(ui->pushButton_2, &QPushButton::released, this, [this]() { emit digit_pressed(2); });
    connect(ui->pushButton_3, &QPushButton::released, this, [this]() { emit digit_pressed(3); });
    connect(ui->pushButton_4, &QPushButton::released, this, [this]() { emit digit_pressed(4); });
    connect(ui->pushButton_5, &QPushButton::released, this, [this]() { emit digit_pressed(5); });
    connect(ui->pushButton_6, &QPushButton::released, this, [this]() { emit digit_pressed(6); });
    connect(ui->pushButton_7, &QPushButton::released, this, [this]() { emit digit_pressed(7); });
    connect(ui->pushButton_8, &QPushButton::released, this, [this]() { emit digit_pressed(8); });
    connect(ui->pushButton_9, &QPushButton::released, this, [this]() { emit digit_pressed(9); });

    connect(this, &MainWindow::digit_pressed, this, &MainWindow::print_digit);

    connect(ui->pushButton_clear, &QPushButton::released,this,&MainWindow::clearLabel);

    connect(ui->pushButton_equals, &QPushButton::released,this,&MainWindow::equals);
    connect(ui->pushButton_add,&QPushButton::released, this, &MainWindow::plus);
    connect(ui->pushButton_subtract, &QPushButton::released, this, &MainWindow::minus);
    connect(ui->pushButton_multipliy,&QPushButton::released,this, &MainWindow::multiply);
    connect(ui->pushButton_divide,&QPushButton::released,this, &MainWindow::divide);

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::print_digit(quint8 digit)
{
    if (m_operator == eq) {
        m_operator = none;
        clearLabel();
        number = 0;
    }
    if (choosOp) {
        clearLabel();
        choosOp = false;
    }
    QString currentText = ui->label->text();  // Get existing text
    currentText.append(QString::number(digit)); // Append new digit
    ui->label->setText(currentText);  // Update QLabel text
}

void MainWindow::equals()
{
    int secondNumber = ui->label->text().toInt();
    switch (m_operator) {
    case add:
        number += secondNumber;
        break;
    case sub:
        number -= secondNumber;
        break;
    case mult:
        number *= secondNumber;
        break;
    case div:
        number /= secondNumber;
        break;
    default:
        m_operator = none;
        number = 0;
    }
    ui->label->setText(QString::number(number));
    m_operator = eq;
}

void MainWindow::plus()
{
    number = ui->label->text().toInt();
    m_operator = add;
    choosOp = true;
}

void MainWindow::minus()
{
    number = ui->label->text().toInt();
    m_operator = sub;
    choosOp = true;
}

void MainWindow::multiply()
{
    number = ui->label->text().toInt();
    m_operator = mult;
    choosOp = true;
}

void MainWindow::divide()
{
    number = ui->label->text().toInt();
    m_operator = div;
    choosOp = true;
}

void MainWindow::clearLabel()
{
    ui->label->clear();
}

