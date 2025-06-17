#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

void bubbleSortStrings(char arr[][100], int n) {
    char temp[100];
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (strcmp(arr[j], arr[j+1]) > 0) {
                strcpy(temp, arr[j]);
                strcpy(arr[j], arr[j+1]);
                strcpy(arr[j+1], temp);
            }
        }
    }
}

int main() {
    char cor[100];
    printf("Digite uma cor: ");
    scanf("%s", cor);
    printf("Cor: %s\n", cor);

    while (getchar() != '\n');

    printf("Digite uma frase: ");
    gets(cor);
    printf("Frase:\n");
    puts(cor);

    //Acesso de caracteres
    printf("\nExemplo: \n");
    char palavra_exemplo[] = "Exemplo";
    char ch_individual;
    int i = 0;
    while (palavra_exemplo[i] != '\0') {
        ch_individual = palavra_exemplo[i];
        printf("%c ", ch_individual);
        i++;
    }
    printf("\n");

    //getchar
    printf("Frase:\n");
    char string_getchar[100];
    int k = 0;
    while ((string_getchar[k] = getchar()) != '\n' && k < 100 - 1) {
        k++;
    }
    string_getchar[k] = '\0';
    printf("String: ");
    for (int j = 0; string_getchar[j] != '\0'; j++) {
        putchar(string_getchar[j]);
    }
    printf("\n");

    //funçoes ctype.h
    printf("\nctype.h:\n");
    char c_teste = 'A';
    char d_teste = '5';
    printf("%c digito = %d\n", c_teste, isdigit(c_teste));
    printf("%c letra = %d\n", c_teste, isalpha(c_teste));
    printf("%c maiuscula = %d\n", c_teste, isupper(c_teste));
    printf("tolower %c: %c\n", c_teste, tolower(c_teste));
    printf("%c digito = %d\n", d_teste, isdigit(d_teste));
    printf("atoi \"123\": %d\n", atoi("123"));
    printf("atof \"12.34\": %.2f\n", atof("12.34"));

    //funçoes string.h
    printf("\nstring.h:\n");
    char s1[100], s2[100];
    strcpy(s1, "Ze");
    strcpy(s2, "Magrelo");
    printf("s1: %s, s2: %s\n", s1, s2);
    strcat(s1, s2);
    printf("strcat(s1,s2): %s\n", s1);
    printf("strlen(s1): %lu\n", strlen(s1));
    printf("strcmp(\"abc\",\"abd\"): %d\n", strcmp("abc", "abd"));

    //bubble sort
    printf("\nBubble Sort:\n");
    char frutas[][100] = {"Laranja", "Banana", "Abacaxi", "Maca", "Uva"};
    int num_frutas = sizeof(frutas) / sizeof(frutas[0]);

    printf("Original:\n");
    for (int idx = 0; idx < num_frutas; idx++) {
        printf("%s\n", frutas[idx]);
    }

    bubbleSortStrings(frutas, num_frutas);

    printf("Ordenadas:\n");
    for (int idx = 0; idx < num_frutas; idx++) {
        printf("%s\n", frutas[idx]);
    }

    return 0;
}