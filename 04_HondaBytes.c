#include <stdio.h>

int main() {
    printf("Alocacao em bytes dos tipos basicos:\n");

    // quantidade de bytes
    printf("char: %zu bytes\n", sizeof(char));
    printf("short: %zu bytes\n", sizeof(short));
    printf("int: %zu bytes\n", sizeof(int));
    printf("long: %zu bytes\n", sizeof(long));
    printf("long long: %zu bytes\n", sizeof(long long));
    printf("unsigned char: %zu bytes\n", sizeof(unsigned char));
    printf("unsigned short: %zu bytes\n", sizeof(unsigned short));
    printf("unsigned int: %zu bytes\n", sizeof(unsigned int));
    printf("unsigned long: %zu bytes\n", sizeof(unsigned long));
    printf("unsigned long long: %zu byte(\n", sizeof(unsigned long long));
    printf("float: %zu bytes\n", sizeof(float));
    printf("double: %zu bytes\n", sizeof(double));
    printf("long double: %zu bytes\n\n", sizeof(long double));

    // limites
    char c = 1;
    while (c > 0) c <<= 1;
    printf("char: %d a %d\n", c, (char)(c - 1));

    unsigned char uc = -1;
    printf("unsigned char: 0 a %u\n", uc);

    short s = 1;
    while (s > 0) s <<= 1;
    printf("short: %d a %d\n", s, (short)(s - 1));

    unsigned short us = -1;
    printf("unsigned short: 0 a %u\n", us);

    int i = 1;
    while (i > 0) i <<= 1;
    printf("int: %d a %d\n", i, i - 1);

    unsigned int ui = -1;
    printf("unsigned int: 0 a %u\n", ui);

    long l = 1L;
    while (l > 0) l <<= 1;
    printf("long: %ld a %ld\n", l, l - 1);

    unsigned long ul = -1L;
    printf("unsigned long: 0 a %lu\n", ul);

    return 0;
}