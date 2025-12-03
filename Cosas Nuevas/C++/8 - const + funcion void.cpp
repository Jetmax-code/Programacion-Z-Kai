#include <iostream>
using namespace std;

const double PI = 3.14159;

void calculoperimetro(double radio) {
    double perimetro = 2 * PI * radio;
    cout << "El perimetro del circulo es: " << perimetro << endl;
}

int main() {
    double radio;

    cout << "Ingresa el radio del circulo: ";
    cin >> radio;

    calculoperimetro(radio);

    return 0;
}