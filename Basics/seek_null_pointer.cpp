//#include <stdio.h>
#include <iostream>

using namespace std;

//Comprobar si puntero es nulo, es decir, vacio
int main()
{
    int *nuevoEmpleado;

    //Usando palabra NULL
    //La palabra NULL simboliza algo vacio
    if(nuevoEmpleado != NULL){
        // Agregar codigo aqui
    }
    else{
        // Hacer algo mas
    }

    //Sin usar palabra NULL, no se recomienda su uso a día de hoy en c++
    //nullptr simboliza lo mismo
    if(nuevoEmpleado != nullptr){
        //Agregar aqui codigo
    }else{
        //Otra cosa
    }

    return 0;
}