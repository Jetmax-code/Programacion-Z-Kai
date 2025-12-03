#include <iostream>
using namespace std;

class rectangulo {
private:
    float base;
    float altura;

public:
    void setbase(float b) { base = (b > 0 ? b : 1); }
    void setaltura(float h) { altura = (h > 0 ? h : 1); }

    float getbase() const { return base; }
    float getaltura() const { return altura; }
};

int main() {
    rectangulo r;
    r.setbase(-5);
    r.setaltura(10);

    cout << "Base: " << r.getbase() << endl;
    cout << "Altura: " << r.getaltura() << endl;
}