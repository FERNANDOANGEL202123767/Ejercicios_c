#include <iostream>
#include <cmath>
using namespace std;

double areaTriangulo(double a, double b, double c) {
    double p = (a + b + c) / 2;
    double area = sqrt(p * (p - a) * (p - b) * (p - c));
    return area;
}

int main() {
    double lado1, lado2, lado3;
    cout << "Introduce las longitudes de los tres lados del triangulo: ";
    cin >> lado1 >> lado2 >> lado3;
    double area = areaTriangulo(lado1, lado2, lado3);
    cout << "El area del triangulo es: " << area << endl;
    return 0;
}