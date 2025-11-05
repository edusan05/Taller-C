// Pruebas unitarias
#include <assert.h>
#include <stdio.h>

int suma(int a, int b)
{
    return a + b;
};

void test_suma() {
    assert(suma(2, 3) == 5);
    assert(suma(-1, 1) == 0);
    assert(suma(-2, -3) == -5);
    printf("Todas las pruebas pasaron.\n");
}
int main() {
    test_suma();
    return 0;
}