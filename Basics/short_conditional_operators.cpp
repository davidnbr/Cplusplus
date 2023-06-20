//#include <stdio.h>
#include <iostream>

using namespace std;

//Convertir numero entero a string
int main()
{
    int a, b;

    //Ejemplo 1
    //Las siguientes lineas de comando pueden sustituirse:
    /*if(a > b) cout << "Verdadero" << endl;
    else cout << "Falso" << endl;*/

    //Simbolo de pregunta para el if, a continuacion la operacion a realizarse si es verdadero
    //Simbolo de dos puntos y finalmente la operacion si es falso
    (a > b) ? cout << "Verdadero" << endl : cout << "Falso" << endl;

    //Ejemplo 2

    /*int menor;

    if(a < b) menor = a;
    else menor = b;*/

    int menor = ((a < b) ? a : b);

    cout << menor << endl;

    return 0;
}