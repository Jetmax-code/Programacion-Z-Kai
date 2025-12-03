#include <iostream>
using namespace std;

class cuenta {
private:
    float saldo;

public:
    cuenta() : saldo(0) {}

    void depositar(float m) { if (m > 0) saldo += m; }

    void retirar(float m) {
        if (m > 0 && m <= saldo) saldo -= m;
    }

    float versaldo() const { return saldo; }
};

int main() {
    cuenta c;
    c.depositar(100);
    c.retirar(30);

    cout << "Saldo: " << c.versaldo() << endl;
}