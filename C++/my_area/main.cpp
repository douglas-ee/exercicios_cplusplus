#include <iostream>
#include "my_area.h"

using namespace std;

int main()
{
    float lado, lado_a, lado_b, raio;

    cout << "lado >> lado_a >> lado_b >> raio " << endl;
    cin >> lado >> lado_a >> lado_b >> raio;

    cout << "Area do quadrado eh: " << a_quadrado(lado) << endl;
    cout << "Area do retangulo eh: " << a_retangulo(lado_a, lado_b) << endl;
    cout << "Area do triangulo eh: " << a_triangulo(lado) << endl;
    cout << "Area do trapezio eh: " << a_trapezio(lado_a, lado_b, lado) << endl;
    cout << "Area do circulo eh: " << a_circulo(raio) << endl;
    cout << "Area da esfera eh: " << a_esfera(raio) << endl;

    return 0;
}
