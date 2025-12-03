#include <iostream>
using namespace std;

float arearectangulo(float base, float altura);

int main() {
    float base, altura;

    cout << "Ingresa la base: ";
    cin >> base;

    cout << "Ingresa la altura: ";
    cin >> altura;

    float area = arearectangulo(base, altura);

    cout << "El area del rectangulo es: " << area << endl;

    return 0;
}

float arearectangulo(float base, float altura) {
    return base * altura;
}