#include <iostream>

void approximateSquareRoot(double number, double initialGuess, double tolerance, double* result) {
    double guess = initialGuess;
    double previousGuess;

    do {
        previousGuess = guess;
        guess = 0.5 * (previousGuess + number / previousGuess);
    } while (std::abs(guess - previousGuess) > tolerance);

    *result = guess;
}

int main() {
    double number;
    std::cout << "Ingrese un número: ";
    std::cin >> number;

    double initialGuess;
    std::cout << "Ingrese una suposición inicial: ";
    std::cin >> initialGuess;

    double tolerance;
    std::cout << "Ingrese la tolerancia: ";
    std::cin >> tolerance;

    double result;
    approximateSquareRoot(number, initialGuess, tolerance, &result);

    std::cout << "La raíz cuadrada aproximada de " << number << " es: " << result << std::endl;

    return 0;
}
