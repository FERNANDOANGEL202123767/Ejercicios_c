// este codigo calcula la raiz cuadrada de un numero 
// utilizando el metodo de aproximacion sucesivas con punteros
// y muestra el resultado en la consola  




#include <stdio.h> //esta linea incluye la biblioteca de entrada y 
                  //salida para interactuar como printf y scanf

// se define una funcion llamada aproximacion_sucesiva que toma un numero x Y un puntero 
// resultado de la aproximacion de la raiz cuadrada, la funcion devuelve un valor de tipo float
float aproximacion_sucesiva(float x, float *resultado) {
    float aproximacion = x / 2;  //establece una aproximacion inicial dividiendo 
    //x entre 2 y almacenandola en la variable aproximacion 


// es un bucle while infinito que se ejecutara hasta que se encuentre una aproximacion 
// lo suficiente precisa
    while (1) {
        // se calcula la aproximacion utilizando la formula de metodo de aproximacion sucesivas
        // se suma la aproximacion actual con x diviendo entre la aproximacion actual 
        // luego se divide el resultado entre 2 y se guarda en la variable siguiente_aprox
        float siguiente_aprox = (aproximacion + x / aproximacion) / 2;

        if (siguiente_aprox == aproximacion || siguiente_aprox - aproximacion < 0.01) {
            *resultado = siguiente_aprox;
            return siguiente_aprox;
        }
// verifica si la diferencia entre la siguiente_aprox y la aproximacion actual es
// lo suficientemente pequeña. Si la diferencia es menor que 0.00001 
// o si siguiente_aprox es igual a aproximacion, se asigna el valor de 
// siguiente_aprox a traves del puntero resultado y se devuelve siguiente_aprox como el 
// resultado de la aproximacion
        aproximacion = siguiente_aprox;  
    }
}
// aqui se actualiza la aproximacion actual con la siguiente_aprox 
// calculada en cada interacion del bucle   


int main() {
    float numero;
    float raiz;

    printf("Ingrese un número: ");
    scanf("%f", &numero);

    if (numero < 0) {
        printf("Error: No se puede calcular la raíz cuadrada de un número negativo.\n");
    } else {
        aproximacion_sucesiva(numero, &raiz);
        printf("La raíz cuadrada de %.2f es aproximadamente %.5f.\n", numero, raiz);
    }

    // aqui se realiza una verificacion condicional
    // si ek numero ingresado es menor que cero(negativo), se muestra un mensaje de error 
    // de lo contrario, se llama ala funcion aproximacion_sucesiva
    // pasando el numero y la direccion de memoria de raiz
    //para obtener la aproximacion de la raiz cuadrada 
    //luego se imprime el resultado 

    return 0; // luego la funcion main  decuelve un valor de salida de 0
    // indicando que el programa se ejecuto correctamente
}

