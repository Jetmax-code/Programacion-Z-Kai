#include <iostream>
#include <string>
using namespace std;

class Libro {
private:
    string titulo;
    string autor;
    int paginas;

public:
    void settitulo(string t) { titulo = t; }
    void setautor(string a) { autor = a; }
    void setpaginas(int p) { paginas = p; }

    string gettitulo() const { return titulo; }
    string getautor() const { return autor; }
    int getpaginas() const { return paginas; }
};

int main() {
    Libro l;
    l.settitulo("La Isla del Tesoro");
    l.setautor("Robert Louis Stevenson");
    l.setpaginas(384);

    cout << l.gettitulo() << " - " << l.getautor() 
         << " (" << l.getpaginas() << " paginas)\n";
}