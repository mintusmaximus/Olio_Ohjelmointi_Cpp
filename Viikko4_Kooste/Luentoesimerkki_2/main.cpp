#include "loginform.h"

#include <iostream>

using namespace std;

int main()
{
    /* luodaan sovellus jossa käytetään perintää ja koostetta
     * kantaluokka form sisältää kaikille formeille yhteiset ominaisuudet
    */

    LoginForm objLoginForm; // luodaan loginform
    objLoginForm.setLabelLogin("Login Label"); // asetetaan loginformin loginLabel
    cout<<objLoginForm.getLabelLogin() << endl; // tulostetaan
    objLoginForm.initializeForm(); // luodaan normaalin formin sisälle label loginformin sisältä

    return 0;
}
