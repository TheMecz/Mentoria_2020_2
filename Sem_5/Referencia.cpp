//Paso de Parámetros por Referecia.

#include <iostream>

using namespace std;

void valNuevo(int& ,int& );

int main(){

    int num1, num2;

    cout<<"Digite 2 numeros: "<<endl;
    cin>>num1>>num2;

    valNuevo(num1, num2);
    cout<<"El valor del primer numero es: "<<num1<<endl;
    cout<<"El valor del segundo número es: "<<num2<<endl;

    return 0;
}

void valNuevo(int& num1, int& num2){
    cout<<"El valor del primer numero es: "<<num1<<endl;
    cout<<"El valor del segundo número es: "<<num2<<endl;
    num1 = 85;
    num2 = 65;

}