//#include <stdio.h>
#include <iostream>
#include <string>

using namespace std;

//Convertir numero entero a string
int main()
{
    int numero = 1517;
    string numeroConvertido(to_string(numero));

    cout << numeroConvertido;

    return 0;
}