#include <iostream>
#include <vector>
#include <string>
#include <iomanip>
#include <limits>
#include <algorithm>

using namespace std;

class Empleado {
private:
    string nombre;
    string dni;
    double salarioBase;

protected:
    double calcularSueldoNeto(double sueldobruto) const {
        if (sueldoBruto > 1000.0) {
            return sueldobruto * 0.88;
        } else {
            return sueldobruto * 0.95;
        }
    }

public:
    Empleado(const string& _nombre, const string& _dni, double _salarioBase)
        : nombre(_nombre), dni(_dni), salarioBase(_salarioBase) {}

    string getNombre() const { return nombre; }
    string getDni() const { return dni; }
    double getSalarioBase() const { return salarioBase; }

    void setSalarioBase(double nuevoSalarioBase) { salarioBase = nuevoSalarioBase; }

    virtual double sueldoFinal() const = 0;

    virtual void mostrarInfo() const {
        cout << "Nombre: " << nombre << endl;
        cout << "DNI: " << dni << endl;
        cout << "Salario Base: $" << fixed << setprecision(2) << salarioBase << endl;
    }

    virtual ~Empleado() {}
};

class Vendedor : public empleado {
private:
    vector<double> ventasMensuales;
    double metaVenta;


    double calcularcomision() const {
        double totalVentas = 0.0;
        for (size_t i = 0; i < ventasMensuales.size(); ++i) {
            totalVentas += ventasMensuales[i];
        }

        if (totalVentas > metaVenta) {
            return totalVentas * 0.10;
        } else {
            return totalVentas * 0.02;
        }
    }

public:
    Vendedor(const string& _nombre, cons string& _dni, double _salarioBase, double _metaVenta)
        : Empleado(_nombre, _dni, _salarioBase), metaVenta(_metaVenta) {
        ventasMensuales.resize(4, 0.0);
    }

    void cargarVentas() {
        cout << "Carga de Ventas Semanales (4 semanas)" << endl;
        for (int i = 0; i < 4; ++i) {
            double venta;
            while (true) {
                cout << "Venta Semana " << (i + 1) << " ($): ";
                cin >> venta;
                if (cin.fail() || venta <= 0) {
                    cout << "Error: Ingrese un valor numérico positivo y mayor a cero." << endl;
                    cin.clear();
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');
                } else {
                    break;
                }
            }
            ventasMensuales[i] = venta;
        }
    }

    double sueldoFinal() const override {
        double comision = calcularComision();
        double sueldoBruto = getSalarioBase() + comision;
        return calcularSueldoNeto(sueldoBruto);
    }

    void mostrarInfo() const override {
        Empleado::mostrarInfo();
        cout << "Meta de Venta: $" << fixed << setprecision(2) << metaVenta << endl;
        cout << "Comisión Obtenida: $" << fixed << setprecision(2) << calcularComision() << endl;
        cout << "SUELDO FINAL (Neto): $" << fixed << setprecision(2) << sueldoFinal() << endl;
        cout << "---" << endl;
    }
};

double validarEntradaNumerica(const string& mensaje) {
    double valor;
    while (true) {
        cout << mensaje;
        if (!(cin >> valor) || valor <= 0) {
            cout << "rror: Ingrese un valor numérico positivo y mayor a cero." << endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        } else {
            break;
        }
    }
    return valor;
}

void registrarVendedor(vector<Vendedor*>& listaVendedores) {
    string nombre, dni;
    double salarioBase, metaVenta;

    cout << "\nREGISTRAR NUEVO VENDEDOR" << endl;
    cout << "Ingrese Nombre: ";
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    getline(cin, nombre);
    cout << "Ingrese DNI: ";
    getline(cin, dni);

    salarioBase = validarEntradaNumerica("Ingrese Salario Base ($): ");
    metaVenta = validarEntradaNumerica("Ingrese Meta de Venta Mensual ($): ");

    Vendedor* nuevoVendedor = new Vendedor(nombre, dni, salarioBase, metaVenta);
    nuevoVendedor->cargarVentas();
    listaVendedores.push_back(nuevoVendedor);

    cout << "\nendedor registrado con éxito!" << endl;
}

void mostrarNominaOrdenada(vector<Vendedor*>& listaVendedores) {
    if (listaVendedores.empty()) {
        cout << "\nLa lista de vendedores está vacía." << endl;
        return;
    }

    int n = listaVendedores.size();
    for (int i = 0; i < n - 1; ++i) {
        for (int j = 0; j < n - i - 1; ++j) {
            if (listaVendedores[j]->sueldoFinal() < listaVendedores[j + 1]->sueldoFinal()) {
                Vendedor* temp = listaVendedores[j];
                listaVendedores[j] = listaVendedores[j + 1];
                listaVendedores[j + 1] = temp;
            }
        }
    }

    cout << "\nNÓMINA ORDENADA (Sueldo Final Mayor a Menor)" << endl;
    for (Vendedor* v : listaVendedores) {
        v->mostrarInfo();
    }
}

void buscarVendedor(const vector<Vendedor*>& listaVendedores) {
    if (listaVendedores.empty()) {
        cout << "\nLa lista de vendedores está vacía." << endl;
        return;
    }

    string dniBusqueda;
    cout << "\nBUSCAR VENDEDOR POR DNI" << endl;
    cout << "Ingrese DNI del vendedor a buscar: ";
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    getline(cin, dniBusqueda);

    bool encontrado = false;
    for (const Vendedor* v : listaVendedores) {
        if (v->getDni() == dniBusqueda) {
            cout << "\nendedor Encontrado:" << endl;
            v->mostrarInfo();
            encontrado = true;
            break;
        }
    }

    if (!encontrado) {
        cout << "\nÑo se encontró ningún vendedor con el DNI: " << dniBusqueda << endl;
    }
}

int main() {
    vector<Vendedor*> vendedores;
    int opcion;


    do {

        cout << "SISTEMA DE GESTIÓN DE NÓMINA" << endl;
        cout << "1. Registrar Vendedores" << endl;
        cout << "2. Mostrar Nómina Ordenada (Sueldo Final)" << endl;
        cout << "3. Buscar Vendedor por DNI" << endl;
        cout << "4. Salir" << endl;
        cout << "Ingrese su opción: ";

        if (!(cin >> opcion)) {
            cout << "Error: Ingrese una opción válida (1-4)." << endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            continue;
        }

        switch (opcion) {
            case 1:
                registrarVendedor(vendedores);
                break;
            case 2:
                mostrarNominaOrdenada(vendedores);
                break;
            case 3:
                buscarVendedor(vendedores);
                break;
            case 4:
                cout << "\nSaliendo del sistema. ¡Hasta luego!" << endl;
                break;
            default:
                cout << "\nOpción no válida. Intente de nuevo." << endl;
        }

    } while (opcion != 4);

    for (Vendedor* v : vendedores) {
        delete v;
    }
    vendedores.clear();

}