#include <stdio.h>
#include <stdlib.h>
#include <strings.h>

int main(){

    char input_string[100];
    int i = 0;

    printf("Digite sua string: ");
    fgets(input_string, sizeof(input_string), stdin);

    printf("String: %s\n", input_string);
    printf("Tamanho: %zu\n", strlen(input_string) - 1);
    printf("\n");
    printf("Palavras da string: \n");

    while(input_string[i] != '\0'){
        if(input_string[i++] != ' '){
            putchar(input_string[i-1]);
        }
        else{
            printf("\n");
        }
    }

    printf("\nString invertida: \n");

    int N = strlen(input_string);
    for(int j = N - 1; j >= 0; j--){
        putchar(input_string[j]);
    }


    printf("\nCaracteres individuais: \n");
    for(int j = 0; j < N; j++){
        putchar(input_string[j]);
        printf("\n");
    }

    return 0;
}