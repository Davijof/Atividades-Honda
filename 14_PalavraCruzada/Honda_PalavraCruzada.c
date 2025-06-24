#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void MatrizInit(char matriz[7][6]){
    printf("\n");
    for(int i = 0; i < 7; i++){
        for(int j = 0; j < 6; j++){
            printf("%c ", matriz[i][j]);
        }
        printf("\n");
    }
}

int main(){
    char matriz_palavras[7][6];
    int completo = 0;
    char input_palavra[10];
    char palavra1[] = "marcha";
    char palavra2[] = "banana";
    char palavra3[] = "altura";
    char palavra4[] = "cacau";
    int certos = 0;

    printf("\n======Palavra Cruzada======\n");
    //Matriz base do jogo
    for(int i = 0; i < 7; i++){
        for(int j = 0; j < 6; j++){
            if(i == 2 || i == 3 || i == 4){
                matriz_palavras[i][j] = '_';
            }
            else if(j == 3 && i != 5 && i != 6){
                matriz_palavras[i][j] = '_';
            }
            else{
                matriz_palavras[i][j] = '#';
            }
            printf("%c ", matriz_palavras[i][j]);
        }
        printf("\n");
    }

    printf("\n===========Dicas===========\n");
    printf("\nmodo de andadura do homem e dos animais\n");
    printf("\nfruta que o macaco ama\n");
    printf("\nacrofobia:o medo de\n");
    printf("\nfruto que faz o chocolate\n");
    printf("\n===========================\n");


    do {
        printf("Digite sua palavra: ");
        scanf("%9s", input_palavra);

        if(strcmp(input_palavra, palavra1) == 0){
            for(int j = 0; j < 6; j++)
                matriz_palavras[2][j] = palavra1[j];

            MatrizInit(matriz_palavras);
            certos++;
        }

        else if(strcmp(input_palavra, palavra2) == 0){
            for(int j = 0; j < 6; j++)
                matriz_palavras[3][j] = palavra2[j];

            MatrizInit(matriz_palavras);
            certos++;
        }

        else if(strcmp(input_palavra, palavra3) == 0){
            for(int j = 0; j < 6; j++)
                matriz_palavras[4][j] = palavra3[j];

            MatrizInit(matriz_palavras);
            certos++;
        }

        else if(strcmp(input_palavra, palavra4) == 0){
            for(int i = 0; i < 5; i++)
                matriz_palavras[i][3] = palavra4[i];

            MatrizInit(matriz_palavras);
            certos++;
        }

        else{
            printf("Voce errou, tenta de novo\n");
        }
        if(certos == 4){
            completo = 1;
            printf("Parabens, voce completou o caca palavras");
        }

    }while(completo == 0);

    return 0;
}