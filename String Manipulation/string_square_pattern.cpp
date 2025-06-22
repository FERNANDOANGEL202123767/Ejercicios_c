#include <stdio.h>
#include <string.h>

int main() {
    char palabra[100];
    int N, x;

    printf("Ingrese una palabra: ");
    scanf("%s", palabra);

    N = strlen(palabra);
    x = N * N;

    printf("La palabra ingresada tiene %d caracteres.\n", N);
    printf("El resultado de multiplicar %d por si mismo es: %d\n", N, x);

    for (int i = 1; i <= x; i++) {
        printf("*");
        if (i % N == 0) {
            printf("\n");
        }
    }

    return 0;
}