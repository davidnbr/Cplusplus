//#include <stdio.h>
#include <iostream>

using namespace std;

//Obtener contenido en direccion de memoria con un puntero
int main()
{
    //Guardamos una variable int
    int numAleatorio = 10;

    //Obtenemos su direccion con '&' y guardamos en un puntero
    int *p_numAleatorio = &numAleatorio;

    cout << *p_numAleatorio << endl;

    return 0;
}