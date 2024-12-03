#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "calculator.h"

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

private slots:
    void on_buttonSaveName_clicked();

    void on_buttonOpenCalc_clicked();

private:
    Ui::MainWindow *ui;
    Calculator *objCalculator; // kooste
    QString nameInput;

};
#endif // MAINWINDOW_H
