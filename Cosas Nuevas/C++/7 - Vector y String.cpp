#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    vector<string> comidas(3);
    
    cout << "Ingresa tus 3 comidas favoritas:\n";

    for (int i = 0; i < 3; i++) {
        cout << "Comida " << i + 1 << ": ";
        cin >> comidas[i];
    }

    cout << "\nTus comidas favoritas son:\n";
    for (int i = 0; i < comidas.size(); i++) {
        cout << "- " << comidas[i] << endl;
    }

    return 0;
}