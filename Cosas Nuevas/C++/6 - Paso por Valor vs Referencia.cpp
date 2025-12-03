#include <iostream>
using namespace std;

void modificarvalor(int numero) {
    numero += 10;
}

void modificareferencia(int &numero) {
    numero += 10;
}

int main() {
    int numero = 20;

    cout << "Valor inicial: " << numero << endl;

    modificarvalor(numero);
    cout << "Despues de modificar por valor: " << numero << endl;

    modificareferencia(numero);
    cout << "Despues de modificar por referencia: " << numero << endl;

    return 0;
}