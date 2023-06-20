//#include <stdio.h>
#include <iostream>

using namespace std;

//Obtener direccion de memoria en un puntero
int main()
{
    //Guardamos una variable int
    int numAleatorio = 10;

    //Obtenemos su direccion con '&' y guardamos en un puntero
    int *p_numAleatorio = &numAleatorio;

    cout << p_numAleatorio << endl;

    return 0;
}