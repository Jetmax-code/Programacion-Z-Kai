#include <iostream>
using namespace std;

class Vehiculo {
protected:
    string marca;
    string modelo;

public:
    Vehiculo(string marca, string modelo)
        : marca(marca), modelo(modelo) {}

    virtual void mostrardatos() {
        cout << "Marca: " << marca << endl;
        cout << "Modelo: " << modelo << endl;
    }
};

class Coche : public Vehiculo {
private:
    int puertas;

public:
    Coche(string marca, string modelo, int puertas)
        : Vehiculo(marca, modelo), puertas(puertas) {}

    void mostrardatos() override {
        cout << "CARRO" << endl;
        Vehiculo::mostrardatos();
        cout << "Puertas: " << puertas << endl;
        cout << "-------------------------" << endl;
    }
};

class Moto : public Vehiculo {
private:
    int cilindrada;

public:
    Moto(string marca, string modelo, int cilindrada)
        : Vehiculo(marca, modelo), cilindrada(cilindrada) {}

    void mostrardatos() override {
        cout << "MOTO" << endl;
        Vehiculo::mostrardatos();
        cout << "Cilindrada: " << cilindrada << " cc" << endl;
        cout << "-------------------------" << endl;
    }
};
int main() {

    Coche c("Toyota", "Corolla", 4);
    Moto m("Yamaha", "MT-07", 689);

    c.mostrardatos();
    m.mostrardatos();

    return 0;
}