#include <iostream>
#include <cmath>
using namespace std;
int main() {
    double pi_actual ={};
    double aux = {};
    double termino = {1.0};
    int denominador = {1};
    int signo = {1};

    do {
        aux = pi_actual;
        pi_actual += signo * termino;
        denominador += 2;
        signo *= -1;
        termino = 1.0 / denominador;
    } while (fabs(pi_actual - aux) >= 1e-7);

    double pi = 4 * pi_actual;


    cout.precision(7);
    cout << "Valor estimado de Pi con 7 dígitos de precisión: "<< pi << "\n";

    return 0;
}
