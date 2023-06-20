//#include <stdio.h>
#include <iostream>

using namespace std;

//Obtener direccion de memoria de un puntero
int main()
{
    //Guardamos una variable int
    int numAleatorio = 10;

    //Obtenemos su direccion con '&' y guardamos en un puntero
    int *p_numAleatorio = &numAleatorio;

    //Usamos doble asterisco porque es un puntero que apunta a otro puntero
    //Se llama puntero doble
    int **nuevoPuntero = &p_numAleatorio;

    cout << nuevoPuntero << endl;

    return 0;
}