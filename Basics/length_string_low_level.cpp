#include <iostream>
#include <stdio.h>
#include <cstring>
using namespace std;

//Ejemplo cadena de caracteres de bajo nivel
int main()
{
    //Cadena de caracteres ejemplo: nombreDeUsuario
    char nombreDeUsuario[10]="davidnbr";
    int longitud = strlen(nombreDeUsuario);

    cout << longitud;

    return 0;
}
