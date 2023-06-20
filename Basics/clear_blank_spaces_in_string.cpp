//#include <stdio.h>
#include <iostream>
#include <string>
#include <cctype>
#include <algorithm>

using namespace std;

//Quitar espacios en blanco innecesarios de una string
int main()
{
    string correoElectronico = "conta   cto @ eliezer lop ez. com";

    //remove_if devuelve un iterador para determinar el final de la cadena de caracteres sin los espacios
    //::isspace es un elemento que simboliza un espacio en una string, se incluye en la libreria cctype
    //erase usa el iterador y la posicion final de la cadena de caracteres, eliminando todo lo que encuentre desde la posicion devuelta por remove_if
    correoElectronico.erase(remove_if(correoElectronico.begin(),correoElectronico.end(), ::isspace), correoElectronico.end());
    
    cout << correoElectronico << endl;

    return 0;
}