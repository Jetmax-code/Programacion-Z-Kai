#include <iostream>
#include <string>
using namespace std;

class Persona {
protected:
    string nombre;
    int edad;

public:
    Persona(string n, int e) : nombre(n), edad(e) {}

    virtual void mostrar() {
        cout << "Nombre: " << nombre << ", Edad: " << edad;
    }
};

class Empleado : public Persona {
private:
    float salario;

public:
    Empleado(string n, int e, float s) : Persona(n, e), salario(s) {}

    void mostrar() override {
        Persona::mostrar();
        cout << ", Salario: " << salario;
    }
};

int main() {
    Empleado e("Ana", 30, 2500);
    e.mostrar();
}