#include <stdio.h>

int sumaStart(int a, int b)
{
    return a + b;
}
int restaStart(int a, int b)
{
    return a - b;
}
int multiplicacionStart(int a, int b)
{
    return a * b;
}
int divisionStart(int a, int b)
{
    if (b != 0) {
        return a / b;
    } else {
        printf("Error: División por cero.\n");
        return 0; // Retorna 0 en caso de división por cero
    }
}