#include <iostream>
#include <cmath>
using namespace std;

/* 

1. De acuerdo con el m ́etodo de bisecci ́on, encuentre soluciones precisas dentro de 10−5 para las siguientes
funciones:
(a) x − 2−x = 0 para [0, 1]
(b) ex − x2 + 3x − 2 = 0 para [0, 1]
(c) x cos x − 2x2 + 3x − 1 = 0 para [0.2, 0.3] y [1.2, 1.3]
Realice un esbozo de la gr ́afica junto conla iteraci ́on del m ́etodo aplicado.
*/
double funcion(double x) {
    return x - pow(2, -x);
}
double biseccion(double a, double b, double tol, int max_iter) {
    if (funcion(a) * funcion(b) > 0) {
        cout << "La función no cambia" << endl;
        return -1;
    }

    int iteracion = 0;
    double midpoint;
    while ((b - a) / 2.0 > tol) {
        midpoint = (a + b) / 2.0;
        if (funcion(midpoint) == 0) {
            return midpoint;
        } else if (funcion(a) * funcion(midpoint) < 0) {b = midpoint;
        } else {
            a = midpoint;
        }

        iteracion++;
        if (iteracion >= max_iter) {
            cout << "No más iteraciones" << endl;
            break;
        }
    }

    return (a + b) / 2.0;
}

int main() {
    double a = 0;
    double b = 1;
    double tolerancia = 0.00001;
    int max_iteraciones = 1000;

    double raiz = biseccion(a, b, tolerancia, max_iteraciones);
    if (raiz != -1) {
        cout << "Raiz aporx es" << raiz << endl;
    }

    return 0;
}


double funcion2(double x) {
    return exp(x) - pow(x, 2) + 3*x - 2;
}

double funcion2(double x) {
    return // x cos x − 2x2 + 3x − 1;
   // Me falta esa
}
