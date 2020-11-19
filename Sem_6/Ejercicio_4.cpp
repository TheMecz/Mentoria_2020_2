/*Ejercicio 4: Desarrolle un programa que permita leer una temepratura en grados Fahrenheit y la convierta
 * a través de una función, a grados: Celsius, Kelvin y grados Rankine.
 *
 * La siguientes equivalencias pueden ser utilizadas para realizar la conversión:
 *
 * */

#include <iostream>

using namespace std;

int main(){

    double temp, *ptr_temp;
    ptr_temp = &temp;
    cout<<"\nDigite la temperatura en Fahrenheit: "; cin>>*ptr_temp;
    *ptr_temp = (5*(*ptr_temp - 32)/9) + 273.15;
    cout<<"\nEl valor de la temperatura en Kelvin es: "<<*ptr_temp;
    *ptr_temp = *ptr_temp - 273.15;
    cout<<"\nEl valor de la temperatura en Celsius es: " <<*ptr_temp;
    *ptr_temp = ((*ptr_temp/5)*9) + 491.67;
    cout<<"\nEl valor de la temepratura en Rankine es: "<<*ptr_temp;

    return 0;
}

