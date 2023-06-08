#include <iostream>

int main() {
    double result = 5 + 2 / (1 / (1 + 2 / (2 - 1.0 / 4))); // realizamos el cálculo
    std::cout << "Operación: 5 + 2/(1/(1 + 2/(2 - 1/4)))" << std::endl; // mostramos la operación
    std::cout << "Resultado: " << result << std::endl; // mostramos el resultado
    return 0;
}
