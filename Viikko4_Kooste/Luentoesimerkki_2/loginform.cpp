#include "loginform.h"

string LoginForm::getLabelLogin() const
{
    return labelLogin;
}

void LoginForm::initializeForm()
{
    objF.setLabel("Form label"); // labelin asettaminen Form luokalle
    cout << objF.getLabel() << endl; // tulostetaan tieto
}

void LoginForm::setLabelLogin(const string &newLabelLogin)
{
    labelLogin = newLabelLogin;
}

LoginForm::LoginForm() {}
