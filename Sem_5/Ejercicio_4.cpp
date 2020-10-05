//Ejercicio 4: Hallar recursivamente la suma de los cuadrados de los números de 1 a n, donce n es ingresado por el usuario.

#include <iostream>

using namespace std;

void pedirDatos();
int suma_cuadrados(int n);

int n;

int main(){

    pedirDatos();
    cout<<suma_cuadrados(n);

    return 0;
}

void pedirDatos(){
    cout<<"Digite el número de elementos a operar: ";
    cin>>n;
}

int suma_cuadrados(int n){

    if(n==1)
        return 1;

    return n*n + suma_cuadrados(n-1);
}
