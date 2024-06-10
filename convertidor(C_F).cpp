#include <iostream>
using namespace std;

// Función para convertir de Celsius a Fahrenheit
double celsiusToFahrenheit(double celsius) {
    return (celsius * 9/5) + 32;
}

// Función para convertir de Fahrenheit a Celsius
double fahrenheitToCelsius(double fahrenheit) {
    return (fahrenheit - 32) * 5/9;
}

int main() {
    double temperatura;
    char unidad;

    cout << "Ingrese la temperatura: ";
    cin >> temperatura;

    cout << "Ingrese la unidad (C/F): ";
    cin >> unidad;

    if (unidad == 'C' || unidad == 'c') {
        double fahrenheit = celsiusToFahrenheit(temperatura);
        cout << temperatura << " grados Celsius equivale a " << fahrenheit << " grados Fahrenheit." << endl;
    }
    else if (unidad == 'F' || unidad == 'f') {
        double celsius = fahrenheitToCelsius(temperatura);
        cout << temperatura << " grados Fahrenheit equivale a " << celsius << " grados Celsius." << endl;
    }
    else {
        cout << "Unidad no válida. Por favor, ingrese 'C' o 'F'." << endl;
    }

    return 0;
}