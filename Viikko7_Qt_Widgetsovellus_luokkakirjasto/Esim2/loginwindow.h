#ifndef LOGINWINDOW_H
#define LOGINWINDOW_H

#include <QDialog>

namespace Ui {
class LoginWindow;
}

class LoginWindow : public QDialog
{
    Q_OBJECT

public:
    explicit LoginWindow(QWidget *parent = nullptr);
    ~LoginWindow();

    QString getUsername() const;
    void setUsername(const QString &newUsername);

private slots:
    void on_buttonLogin_clicked();


private:
    Ui::LoginWindow *ui;
    QString username;

signals:
    void nameSetted();
};

#endif // LOGINWINDOW_H
