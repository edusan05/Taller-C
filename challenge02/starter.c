#include <stdio.h>

int suma(int a, int b)
{
    return a + b;
}
int resta(int a, int b)
{
    return a - b;
}
int multiplicacion(int a, int b)
{
    return a * b;
}
int division(int a, int b)
{
    if (b != 0) {
        return a / b;
    } else {
        printf("Error: División por cero.\n");
        return 0; // Retorna 0 en caso de división por cero
    }
}

int main() {
    printf("Calculadora inicializada.\n");
    return 0;
}
