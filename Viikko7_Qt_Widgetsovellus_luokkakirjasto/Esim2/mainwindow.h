#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "loginwindow.h"

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
    void on_buttonLogin_clicked();
    void fetchUsernameSlot();

    void on_buttonForm1_clicked();

    void on_buttonForm3_clicked();

    void on_buttonForm2_clicked();

    void on_buttonPersonData_clicked();

private:
    Ui::MainWindow *ui;
    LoginWindow *objLogin;
    QString username;
};
#endif // MAINWINDOW_H
