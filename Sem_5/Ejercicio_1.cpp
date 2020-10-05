/*Ejercicio 1: Escribe un programa en C++ que devuelva la parte fraccionaria de cualquier número introducido
 * por el ususario. Por ejemplo, si se introduce el número 256.879, debería desplegarse el número 0.879.*/

#include <iostream>

using namespace std;

void pedirDatos();
float parte_fraccionaria(float n);

float n;

int main(){
    pedirDatos();
    cout<<"La parte faccionaria es: "<<parte_fraccionaria(n);
}

void pedirDatos(){
    cout<<"Digite un número: ";
    cin>>n;
}

float parte_fraccionaria(float n){
    int num;
    float resto;
    num = n;
    resto = n - num;
    return resto;
}