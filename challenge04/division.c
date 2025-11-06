#include <stdio.h>

int division(int a, int b)
{
    if (b != 0) {
        return a / b;
    } else {
        printf("Error: División por cero.\n");
        return 0; // Retorna 0 en caso de división por cero
    }
}