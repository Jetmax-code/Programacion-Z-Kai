#include <iostream>
using namespace std;

int main() {
    int numerosecreto = 42;
    int intento;

    cout << "Adivina el numero secreto: ";

    cin >> intento;

    while (intento != numerosecreto) {
        if (intento < numerosecreto) {
            cout << "Mas alto, intenta de nuevo: ";
        } else {
            cout << "Mas bajo, intenta de nuevo: ";
        }
        cin >> intento;
    }

    cout << "Le atinaste, el numero era " << numerosecreto << "." << endl;

    return 0;

}
