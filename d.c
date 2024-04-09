#include <stdio.h>

int main() {
    int a = 10;
    int b = 5;

    // Suma
    int suma = a + b;
    printf("La suma de %d y %d es: %d\n", a, b, suma);

    // Resta
    int resta = a - b;
    printf("La resta de %d y %d es: %d\n", a, b, resta);

    // Multiplicación
    int multiplicacion = a * b;
    printf("El producto de %d y %d es: %d\n", a, b, multiplicacion);

    // División
    int division = a / b;
    printf("La división de %d entre %d es: %d\n", a, b, division);

    // Módulo (resto de la división)
    int modulo = a % b;
    printf("El módulo de %d entre %d es: %d\n", a, b, modulo);

    return 0;
}