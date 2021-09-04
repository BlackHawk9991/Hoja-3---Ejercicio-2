//Me falta la función 2. editar plato

#include <iostream>
#include <stdlib.h>
#include <ctime>
#include <string>
#include "ArrCarta.h"

using namespace std;

void Menu() {
    cout << "1. Agregar plato" << endl;
    cout << "2. Editar nombre del plato" << endl;
    cout << "3. Eliminar plato" << endl;
    cout << "4. Imprimir todas los platos" << endl;
    cout << "5. Reporte de platos picantes" << endl;
    cout << "6. Reporte de platos mas caros" << endl;
}

int main(){
    srand(time(NULL));
    int op, posicion;
    string nombre;
    ArrCarta* array = new ArrCarta();
    while (true) {
        Menu();
        cout << "Ingresar la opcion :"; cin >> op;
        switch (op) {
        case 1: array->addCarta(); cout << "Plato agregado" << endl; break;
        /*
        case 2: 
            cout << "Ingresar posicion del arreglo: "; cin >> posicion;
            cout << "Ingresar nuevo nombre de plato: "; cin >> nombre;
            cout << "Nombre editado" << endl; break;
        */
        case 3:
            array->deleteCarta(); cout << "Plato eliminado" << endl; break;
        case 4: array->printArray(); break;
        case 5: array->platosPicantes(); break;
        case 6: array->platosCaros(); break;
        }
        system("pause");
        system("cls");
    }
    delete array;

    system("pause");
    return 0;
   
}
