#include <iostream>
#define LIMITE 10
using namespace std;

int main() {
    int numero;

    cout << "Ingresa un numero: ";
    cin >> numero;

    for (int i = 1; i <= LIMITE; i++) {
        cout << numero << " x " << i << " = " << numero * i << endl;
    }

    return 0;
}