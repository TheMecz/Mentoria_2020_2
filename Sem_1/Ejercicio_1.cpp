/*Escribe un programa que permita leer un número float y el programa imprima en una linea la
 * parte entera del número y en la linea siguiente la parte fraccionaria del numero.
 * Ejemplo:
 * Ingrese un float: 14.8765
 * Parte entera: 14
 * Parte fraccionaria: 0.8765
 * */

#include <iostream>
#include <cmath>

using namespace std;

int main(){

    float num_f, parte_frac;
    int parte_entera;
    cout<<"Digite un numero flotante: "; cin>>num_f;
    parte_entera = num_f;
    parte_frac = num_f-parte_entera;
    cout<<"La parte entera es: "<<parte_entera<<endl;
    cout<<"La parte fraccionaria es: "<<parte_frac<<endl;


    return 0;
}