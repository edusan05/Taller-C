#include <assert.h>
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

// pruebas unitarias
void test_Completo(){
    assert(suma(2, 3) == 5);
    assert(suma(-1, 1) == 0);
    assert(suma(-2, -3) == -5);

    assert(resta(5, 3) == 2);
    assert(resta(2, 4) == -2);
    assert(resta(-2, -3) == 1);

    assert(multiplicacion(2, 3) == 6);
    assert(multiplicacion(-2, 3) == -6);
    assert(multiplicacion(-2, -3) == 6);

    assert(division(6, 3) == 2);
    assert(division(5, 2) == 2);
    assert(division(-6, 3) == -2);
    assert(division(5, 0) == 0);

    printf("Todas las pruebas pasaron.\n");
}

int main() {
    test_Completo();
    return 0;
}