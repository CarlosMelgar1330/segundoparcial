#include <iostream>
using namespace std;

enum Estaciones {Primavera = 1, Verano, Otono, Invierno};

int main() {
    int numero;
    cout << "Ingresa un numero del 1 al 4: ";
    cin >> numero;

    const char* estaciones[] = {"", "Primavra", "Verano", "Otoño", "Invierno"};

    if (numero >= 1 && numero <= 4) {
        cout << estaciones[numero] << endl;
    } else {
        cout << "Numero invlido" << endl;
    }

    return 0;
}

