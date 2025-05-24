#include <iostream>
using namespace std;

// Definir el tipo de puntero a función
typedef double (*operacion)(double, double);


double sumar(double a, double b) {
    return a + b;
}

double restar(double a, double b) {
    return a - b;
}

double multiplicar(double a, double b) {
    return a * b;
}

double dividir(double a, double b) {
    if (b == 0) {
        cout << "no puede dividirse por 0 ";
        return 0;
    }
    return a / b;
}

void digitar_numero(double &x, double &y) {
    cout << "ingrese el primer numero: " << endl;
    cin >> x;
    cout << "ingrese el segundo numero: " << endl;
    cin >> y;
}

int main() {
    int opciones;
    double x, y, respuesta;
    
    // Array de punteros a funciones
    operacion operaciones[4] = {sumar, restar, multiplicar, dividir};
    
    cout << "------------------------calculadora----------------------" << endl;
    cout << "operaciones: " << endl;
    cout << "1) sumar" << endl;
    cout << "2) restar" << endl;
    cout << "3) multiplicar" << endl;
    cout << "4) dividir" << endl;
    cout << "5) salir" << endl;
    cout << "seleccione una opcion: " << endl;
    cin >> opciones;

    if (opciones != 5) {
        digitar_numero(x, y);
        
        if (opciones >= 1 && opciones <= 4) {
            // Usar el puntero a función correspondiente
            respuesta = operaciones[opciones-1](x, y);
            
            // Solo mostrar la respuesta si no es 0 (caso de división por cero)
            if (opciones != 4 || respuesta != 0) {
                cout << "la respuesta es: " << respuesta << endl;
            }
        } else {
            cout << "opcion no valida" << endl;
        }
    }
    
    return 0;
}
