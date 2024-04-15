#include <iostream>
#include <cmath>
using namespace std;

#include <iostream>
#include <cmath> // Para usar la función fabs()
#include <iomanip>

using namespace std;

double f(double x) {
    // Usamos la función dada: x^3 - 7x^2 + 14x - 6
    return x*x*x - 7*x*x + 14*x - 6;
}

// Método de bisección
void biseccion(double a, double b, double tol) {

    if (f(a) * f(b) >= 0) {
        cout << "No se puede asegurar la existencia de una raíz en el intervalo dado." << endl;
        cout << "No se puede asegurar la existencia de una raíz en el intervalo dado." << f(a) << endl;
        cout << "No se puede asegurar la existencia de una raíz en el intervalo dado." << f(b) << endl;
        return;
    }

    double c = a;

    int i = 0;
    int iter = 0;
    while (fabs(f(b - a)) > tol) {
        double c = (a + b) / 2;

        if (fabs(f(c)) < tol || (b - a) / 2 < tol) {
            std::setprecision(18);
            std::cout << "La raíz encontrada es: " << c << " después de " << iter++ << " iteraciones" << endl;
            return;
        }

        if (f(c) * f(a) < 0) {
            b = c;
        } else {
            a = c;
        }
        iter++;
        i++;
    }
 
    cout << "La raíz después de " << iter << " iteraciones es: " << c << endl;
}

int main() {
    double a = 3.2, b = 4;
    // Tolerancia
    double tol = 10e-2;

    biseccion(a, b, tol);

    return 0;
}
