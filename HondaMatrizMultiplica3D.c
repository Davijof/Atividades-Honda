#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int matriz1[3][3][3] = {0};
    int matriz2[3][3][3] = {0};
    int matriz3[3][3][3] = {0};
    
    srand(time(NULL));

    printf("Matriz 1:\n");
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            for(int k = 0; k < 3; k++){
            matriz1[i][j][k] = rand() % 9;
            printf("%d ", matriz1[i][j][k]);
            }
            printf("\n");
        }
        printf("\n");
    }

    printf("Matriz 2:\n");
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            for(int k = 0; k < 3; k++){
                matriz2[i][j][k] = rand() % 9;
                printf("%d ", matriz2[i][j][k]);
            }
            printf("\n");
        }
        printf("\n");
    }


    //Multiplicação
    for (int x = 0; x < 3; x++) {
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                matriz3[x][i][j] = 0;
                for (int k = 0; k < 3; k++)
                    matriz3[x][i][j] += matriz1[x][i][k] * matriz2[x][k][j];
                }
            }
        }

    //Resultado
    printf("Resultado: \n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            for (int k = 0; k < 3; k++) {
                printf("%d ", matriz3[i][j][k]);
            }
            printf("\n");
        }
        printf("\n");
    }

    return 0;
    }