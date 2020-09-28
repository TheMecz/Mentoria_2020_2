#include <iostream>

using namespace std;

int main(){

    int velocidad=0, zona=0, via=0;

    do {
    cout<<":::SELECCIONA LA ZONA:::"<<endl;
    cout<<"1. Zona urbana"<<endl;
    cout<<"2. Carreteras"<<endl;
    cout<<"Digite el numero de la zona: "; cin>>zona;
        switch (zona) {
            case 1:
                cout << ":::SELECCIONE EL TIPO DE VIA:::" << endl;
                cout << "1. Zona escolar" << endl;
                cout << "2. Calle y jirones" << endl;
                cout << "3. Avenidas" << endl;
                cout << "4. En vias expresas" << endl;
                cout << "Digite la opcion: ";
                cin >> via;
                switch (via) {
                    case 1:
                        cout << "Digite su velocidad: ";
                        cin >> velocidad;
                        if (velocidad > 30) {
                            cout << ":::SU VELOCIDAD ESTA FUERA DE LOS LIMITES:::";
                        } else {
                            cout << ":::SU VELOCIDAD ESTA DENTRO DE LOS LIMITES:::";
                        }
                        break;
                    case 2:
                        cout << "Digite su velocidad: ";
                        cin >> velocidad;
                        if (velocidad > 40) {
                            cout << ":::SU VELOCIDAD ESTA FUERA DE LOS LIMITES:::";
                        } else {
                            cout << ":::SU VELOCIDAD ESTA DENTRO DE LOS LIMITES:::";
                        }
                        break;
                    case 3:
                        cout << "Digite su velocidad: ";
                        cin >> velocidad;
                        if (velocidad > 60) {
                            cout << ":::SU VELOCIDAD ESTA FUERA DE LOS LIMITES:::";
                        } else {
                            cout << ":::SU VELOCIDAD ESTA DENTRO DE LOS LIMITES:::";
                        }
                        break;
                    case 4:
                        cout << "Digite su velocidad: ";
                        cin >> velocidad;
                        if (velocidad > 80) {
                            cout << ":::SU VELOCIDAD ESTA FUERA DE LOS LIMITES:::";
                        } else {
                            cout << ":::SU VELOCIDAD ESTA DENTRO DE LOS LIMITES:::";
                        }
                        break;
                    default:
                        cout << "LA OPCION NO EXISTE";
                        break;
                }
                break;
            case 2:
                cout << ":::SELECCIONE EL TIPO DE VIA:::" << endl;
                cout << "1. Caminos rurales" << endl;
                cout << "2. Para vehiculos de carga" << endl;
                cout << "3. Para vehiculos del servicio publico" << endl;
                cout << "4. Para automoviles, camionetas y motocicletas" << endl;
                cout << "Digite la opcion: ";
                cin >> via;
                switch (via) {
                    case 1:
                        cout << "Digite su velocidad: ";
                        cin >> velocidad;
                        if (velocidad > 60) {
                            cout << ":::SU VELOCIDAD ESTA FUERA DE LOS LIMITES:::";
                        } else {
                            cout << ":::SU VELOCIDAD ESTA DENTRO DE LOS LIMITES:::";
                        }
                        break;
                    case 2:
                        cout << "Digite su velocidad: ";
                        cin >> velocidad;
                        if (velocidad > 80) {
                            cout << ":::SU VELOCIDAD ESTA FUERA DE LOS LIMITES:::";
                        } else {
                            cout << ":::SU VELOCIDAD ESTA DENTRO DE LOS LIMITES:::";
                        }
                        break;
                    case 3:
                        cout << "Digite su velocidad: ";
                        cin >> velocidad;
                        if (velocidad > 90) {
                            cout << ":::SU VELOCIDAD ESTA FUERA DE LOS LIMITES:::";
                        } else {
                            cout << ":::SU VELOCIDAD ESTA DENTRO DE LOS LIMITES:::";
                        }
                        break;
                    case 4:
                        cout << "Digite su velocidad: ";
                        cin >> velocidad;
                        if (velocidad > 100) {
                            cout << ":::SU VELOCIDAD ESTA FUERA DE LOS LIMITES:::";
                        } else {
                            cout << ":::SU VELOCIDAD ESTA DENTRO DE LOS LIMITES:::";
                        }
                        break;
                    default:
                        "LA OPCION NO EXISTE";
                        break;
                }
                break;
            default:
                "LA OPCION NO EXISTE";
                break;
        }
    }while (zona>2 || zona<0);
    return 0;
}