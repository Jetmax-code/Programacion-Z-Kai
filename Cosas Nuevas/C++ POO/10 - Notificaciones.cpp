#include <iostream>
using namespace std;

class Notificacion {
public:
    virtual void enviar() = 0;
};

class correo : public Notificacion {
public:
    void enviar() override {
        cout << "Enviando correo" << endl;
    }
};

class mensaje : public Notificacion {
public:
    void enviar() override {
        cout << "Enviando mensaje" << endl;
    }
};

int main() {
    Notificacion* n1 = new correo();
    Notificacion* n2 = new mensaje();

    n1->enviar();
    n2->enviar();

    delete n1;
    delete n2;
}