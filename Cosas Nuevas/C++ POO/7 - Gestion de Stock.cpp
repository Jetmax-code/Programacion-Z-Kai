#include <iostream>
using namespace std;

class Producto {
private:
    float precio;
    int stock;

public:
    Producto(float p, int s) : precio(p), stock(s) {}

    void actualizarstock(int cant) {
        if (stock + cant >= 0) stock += cant;
    }

    float valorinventario() const {
        return precio * stock;
    }
};

int main() {
    Producto p(10, 5);
    p.actualizarstock(3);
    cout << "Valor total: " << p.valorinventario();
}