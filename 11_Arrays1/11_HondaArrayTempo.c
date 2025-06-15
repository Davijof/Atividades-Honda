#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int funcinitlinha(int func[][50], int x, int y);
int funcinitcoluna(int func[][50], int x, int y);

int main() {

    int Array[100][50] = {0};
    clock_t tempo;


    tempo = clock();
    printf("Funcao linha coluna: \n");
    funcinitlinha(Array, 100, 50);
    printf("\n");

    tempo = clock() - tempo;
    printf("\nTempo: %f\n", (float)tempo / CLOCKS_PER_SEC);

    tempo = clock();
    printf("\n\n\nFuncao coluna linha: \n");
    funcinitcoluna(Array, 100, 50);
    printf("\n");

    tempo = clock() - tempo;
    printf("\nTempo: %f\n", (float)tempo / CLOCKS_PER_SEC);

    return 0;
}

int funcinitlinha(int func[][50], int x, int y){
    for ( int i = 0; i < x; i++){
        for (int j = 0; j < y ; j++){
            func[i][j] = i + j;
        printf("%d ", func[i][j]);
        }
    }
    printf("\n");
}

int funcinitcoluna(int func[][50], int x, int y){
    for ( int i = 0; i < y; i++){
        for (int j = 0; j < x ; j++){
            func[i][j] = i + j;
        printf("%d ", func[i][j]);
        }
    }
    printf("\n");
}

