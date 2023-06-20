//#include <stdio.h>
#include <iostream>
//#include <string>
#include <locale.h>

using namespace std;

//Imprimir caracteres especiales como tildes
int main()
{
    //á é í ó ú


    //setlocale(categoria,idioma);
    setlocale(LC_ALL, "spanish"); //Permite uso de caracteres del español.
    string ejemplo = "María come melón";

    cout << ejemplo;
    //printf(ejemplo);

    return 0;
}