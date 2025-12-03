#include <iostream>
using namespace std;

int main() {
    int opcion;

    do {
        cout << "Menu\n";
        cout << "1. Saludar\n";
        cout << "2. Despedirse\n";
        cout << "3. Salir\n";
        cout << "Elige una opcion: ";
        cin >> opcion;

        switch (opcion) {
            case 1:
                cout << "Hola" << endl;
                break;

            case 2:
                cout << "Adios" << endl;
                break;

            case 3:
                cout << "Saliendo del programa" << endl;
                break;

            default:
                cout << "Opcion invalida." << endl;
                break;
        }

    } while (opcion != 3);

    return 0;
}