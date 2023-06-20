//#include <stdio.h>
#include <iostream>
#include <string>

using namespace std;

//Convertir string a numero entero
int main()
{
    string numero = "1517";

    //Funcion incluida en libreria string, para convertir a int
    int numInt = stoi(numero);

    cout << numInt;

    return 0;
}