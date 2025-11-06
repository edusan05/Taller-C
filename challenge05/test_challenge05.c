#include <stdio.h>
#include <assert.h>

int suma(int a, int b) {
    return a + b;
}

void test_suma() {
    assert(suma(2, 3) == 5);
    assert(suma(-1, 1) == 0);

    printf("All tests passed!\n");
}

int main() {
    test_suma();
    return 0;
}