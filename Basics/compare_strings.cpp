#include <stdio.h>
#include <iostream>
#include <string>
using namespace std;

//Comparar strings
int main()
{
    //Strings ejemplo
    string cadena1, cadena2;
    
    cadena1 = "HolaMundo";
    cadena2 = "Ejemplo";

    //Si resultado true (1), son iguales
    bool sonIguales = (cadena1 == cadena2);

    cout << sonIguales;

    return 0;
}