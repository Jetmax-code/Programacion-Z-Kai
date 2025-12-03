#include <iostream>
using namespace std;

class Temperatura {
private:
    float celsius;

public:
    void setcelsius(float c) { celsius = c; }

    float getcelsius() const { return celsius; }
    float afahrenheit() const { return celsius * 9/5 + 32; }
    float akelvin() const { return celsius + 273.15f; }
};

int main() {
    Temperatura t;
    t.setcelsius(25);

    cout << "Celsius: " << t.getcelsius() << endl;
    cout << "F: " << t.afahrenheit() << endl;
    cout << "K: " << t.akelvin() << endl;
}