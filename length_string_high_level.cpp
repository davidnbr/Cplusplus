#include <stdio.h>
#include <iostream>
#include <string>
using namespace std;

//Ejemplo cadena de caracteres de bajo nivel
int main()
{
    //Cadena de caracteres ejemplo: nombreDeUsuario
    string miCadenaDeAltoNivel;
    
    miCadenaDeAltoNivel = "HolaMundo";

    int longitud = miCadenaDeAltoNivel.length();

    cout << longitud;

    return 0;
}