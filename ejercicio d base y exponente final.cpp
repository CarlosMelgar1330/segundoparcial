#include <iostream>
using namespace std;

double calcularPotencia(int base, int exponente) {
    if (exponente == 0) return 1;
    if (exponente < 0) return 1 / calcularPotencia(base, -exponente);
    return base * calcularPotencia(base, exponente - 1);
}

int main() {
    int base, exponente;
    cout << "Ingresa la base: ";
    cin >> base;
    cout << "Ingresa el exponente: ";
    cin >> exponente;

    double potencia = calcularPotencia(base, exponente);
    cout << base << "^" << exponente << " = " << potencia << endl;

    return 0;
}

