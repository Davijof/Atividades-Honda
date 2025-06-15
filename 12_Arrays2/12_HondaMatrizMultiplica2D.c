#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int matriz1[3][3] = {0};
    int matriz2[3][3] = {0};
    int matriz3[3][3] = {0};
    
    srand(time(NULL));

    printf("Matriz 1:\n");
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            matriz1[i][j] = rand() % 9;
            printf("%d ", matriz1[i][j]);
        }
        printf("\n");
    }

    printf("Matriz 2:\n");
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            matriz2[i][j] = rand() % 9;
            printf("%d ", matriz2[i][j]);
        }
        printf("\n");
    }


    //Multiplicação
    printf("Matriz 1 x Matriz 2:\n");
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            matriz3[i][j] = 0;

            for(int k = 0; k < 3; k++){
                matriz3[i][j] += matriz1[i][k] * matriz2 [k][j];
            }
            printf("%d ", matriz3[i][j]);
        }
        printf("\n");
    }
}