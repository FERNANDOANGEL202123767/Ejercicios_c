#include <iostream>

int main() {
    // Operación matemática a realizar: 1/3 + 3/5 + 1/(30/23/30)
    double resultado = 1.0/3.0 + 3.0/5.0 + 1.0/30.0/(23.0/30.0);
    //Mostrar la operacion
    std::cout << "Operacion: 1/3 + 3/5 + 1/30/(23/30);"<< std::endl;
    // Mostrar resultado en pantalla
    std::cout << "Resultado: " << resultado << std::endl;
    
    return 0;
}
