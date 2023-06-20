//#include <stdio.h>
#include <iostream>
#include <string>

using namespace std;

//Calcular letra de DNI
int main()
{
    //Array de caracteres que se usan para el ultimo digito del DNI en españa
    char letras[] = {'T','R','W','A','G','M','Y','F','P','D','X','B',
                    'N','J','Z','S','Q','V','H','L','C','K','E'};
    
    int numeroDNI;

    numeroDNI = 23453298;
    //el numero de DNI se divide para 23 y se obtiene el resto (residuo)
    int posicion = numeroDNI % 23;
    char letra = letras[posicion];

    cout << letra << endl;

    return 0;
}