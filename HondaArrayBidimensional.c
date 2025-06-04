#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//Exercícios: Simular arrays bidimensionais utilizando arrays unidimensionais

void funcinit(int x, int func[]);

int main(){
    int linha = 0, coluna = 0;
    int linha1[5] = {1, 2, 3, 4, 5};
    int linha2[5] = {1, 2, 3, 4, 5};
    int linha3[5] = {1, 2, 3, 4, 5};


    funcinit(5, linha1);
    funcinit(5, linha2);
    funcinit(5, linha3);

    printf("Linha 1-3: \n");
    scanf("%d", &linha);
    printf("Coluna 1-5 \n");
    scanf("%d", &coluna);

    if (linha == 1){
        switch(coluna){

            case 1:
            printf("%d", linha1[0]);
            break;

            case 2:
            printf("%d", linha1[1]);
            break;

            case 3:
            printf("%d", linha1[2]);
            break;

            case 4:
            printf("%d", linha1[3]);
            break;

            case 5:
            printf("%d", linha1[4]);
            break;

        }
    }

    else if (linha == 2){
        switch(coluna){

            case 1:
            printf("%d", linha2[0]);
            break;

            case 2:
            printf("%d", linha2[1]);
            break;

            case 3:
            printf("%d", linha2[2]);
            break;

            case 4:
            printf("%d", linha2[3]);
            break;

            case 5:
            printf("%d", linha2[4]);
            break;

        }
    }

    else if (linha == 3){
        switch(coluna){

            case 1:
            printf("%d", linha3[0]);
            break;

            case 2:
            printf("%d", linha3[1]);
            break;

            case 3:
            printf("%d", linha3[2]);
            break;

            case 4:
            printf("%d", linha3[3]);
            break;

            case 5:
            printf("%d", linha3[4]);
            break;

        }
    }

    else if(linha < 1 || linha > 3 ){
        printf("Valor de linha invalido!");
    }

    else if (coluna < 1 || coluna > 5){
        printf("Valor de coluna invalido");
    }

    return 0;

}

void funcinit(int x, int func[]){
    for ( int i = 0; i < x; i++){
        func[i] = rand() % 9;
        printf("%d ", func[i]);
    }
    printf("\n");
}