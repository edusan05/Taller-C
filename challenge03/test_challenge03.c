#include <stdio.h>
#include <stddef.h>
#include <assert.h>

size_t mi_strlen(const char *s)
{
    size_t cont = 0;
    while (s[cont] != '\0') {
        cont++;
    }
    return cont;
};
int mi_strcmp(const char *s1, const char *s2)
{
    size_t i = 0;
    while (s1[i] != '\0' && s2[i] != '\0') {
        if (s1[i] != s2[i]) {
            return (unsigned char)s1[i] - (unsigned char)s2[i];
        }
        i++;
    }
    return (unsigned char)s1[i] - (unsigned char)s2[i];
};
char *mi_strcpy(char *dest, const char *src)
{
    return dest;
};

// testes for mi_strlen
void test() {
    assert(mi_strlen("") == 0);
    assert(mi_strlen("hello") == 5);
    assert(mi_strlen("C programming") == 13);

    assert(mi_strcmp("", "") == 0);
    assert(mi_strcmp("abc", "abc") == 0);
    assert(mi_strcmp("abc", "abd") < 0);
    assert(mi_strcmp("abd", "abc") > 0);

    char dest[20];
    assert(mi_strcpy(dest, "hello") == dest);
    assert(mi_strcpy(dest, "") == dest);
    assert(mi_strcpy(dest, "C programming") == dest);

    printf("All tests passed!\n");
}

int main() {
    test();
    return 0;
}
