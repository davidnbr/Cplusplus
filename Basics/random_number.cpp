//#include <stdio.h>
#include <iostream>
//#include <cstdlib>
#include <stdlib.h>
#include <time.h>

using namespace std;

//Generar numero aleatorio
int main()
{
    //Establece semilla (seed) para numero aleatorio
    //Lo colocamos así, para crear lo más aleatorio posible, con una semilla variable
    //srand((unsigned) time(NULL));

    //Se puede generar de la misma manera con:
    //Usa el tiempo actual de la computadora
    srand(time(0));

    //generar numero aleatorio, devuelve un entero
    int numAleatorio = rand();

    cout << numAleatorio << endl;

    return 0;
}