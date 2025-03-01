#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    void clearLabel();

private:
    Ui::MainWindow *ui;
    int number = 0;

    enum _operator { none, add, sub, mult, div, eq };
    _operator m_operator = none;
    bool choosOp = false;

signals:
    void digit_pressed(quint8);

public slots:
    void print_digit(quint8 digit);
    void plus();
    void equals();
    void minus();
    void multiply();
    void divide();
};

#endif // MAINWINDOW_H
