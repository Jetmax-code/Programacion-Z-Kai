#include <iostream>
using namespace std;

class Tiempo {
private:
    int horas;
    int minutos;

public:
    Tiempo(int h, int m) : horas(h), minutos(m) {}

    void agregarminutos(int x) {
        minutos += x;
        horas += minutos / 60;
        minutos %= 60;
    }

    void mostrar() {
        cout << horas << ":" << minutos << endl;
    }
};

int main() {
    Tiempo t(1, 50);
    t.agregarminutos(20);
    t.mostrar();
}