#include <iostream>
#include <string>
using namespace std;

class Estudiante {
private:
    string nombre;
    float nota;

public:
    void setnombre(string n) { nombre = n; }
    void setnota(float x) { nota = (x >= 0 && x <= 10 ? x : 0); }

    bool estaprobado() const { return nota >= 6; }
};

int main() {
    Estudiante e;
    e.setnombre("Luis");
    e.setnota(8);

    cout << (e.estaprobado() ? "Aprobado" : "Reprobado") << endl;
}