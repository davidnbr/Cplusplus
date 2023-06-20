#include <iostream>
#include <stdio.h>
#include <string>
using namespace std;

//Ejemplo cadena de caracteres de alto nivel
int main()
{
    //Cadena de caracteres ejemplo: nombreDeUsuario
    string miCadenaDeAltoNivel;
    
    miCadenaDeAltoNivel = "HolaMundo";

    int longitud = miCadenaDeAltoNivel.length();

    cout << longitud;

    return 0;
}
