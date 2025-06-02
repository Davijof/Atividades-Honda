#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

int notas [20];
int numeros [6] = {0, 0, 0, 0, 0, 0};
int max = numeros [0];
int nota;   

srand(time(NULL));

//gera valores 20 valores 0-5
for (int i = 0; i < 20; i++){
    int r = rand() %6;
    notas [i] = r;
    printf("%d ", notas[i]);
}

//se a nota for 0 -> numeros[0]++ etc...
for (int i = 0; i < 20; i++){
    switch(notas[i]){
        case 0 :
        numeros[0]++;
        break;

        case 1 :
        numeros[1]++;
        break;

        case 2 :
        numeros[2]++;
        break;

        case 3 :
        numeros [3]++;
        break;

        case 4 :
        numeros [4]++;
        break;

        case 5 :
        numeros [5]++;
        break;

    }
}

//ve qual é o maior
for (int i = 0; i < 6; i++){
    if(numeros [i] > max){
        max = numeros [i];
        nota = i;
    }
}

printf("\n\nNota da comida da uesc = %d\n", nota);


//bubble sort
printf("\nBubble sort: ");
for ( int i = 0; i < 20 - 1; i++){
     for (int j = 0; j < 20 - i - 1; j++) {
        if (notas[j] > notas[j + 1]){
            int aux = notas[j];
            notas[j] = notas[j+1];
            notas[j+1] = aux;
        }
    }
}
for (int i = 0; i < 20; i++){
    printf("%d ", notas[i]);
}
printf("\n\n");

//histograma
printf("==============Histograma==============\n");

/*
printf("Zero:   |");
for (int i = 0; i < 20; i++){
    if(notas[i] == 0){
        printf("=");
    }
}
printf("\n");
printf("Um:     |");
for (int i = 0; i < 20; i++){
    if(notas[i] == 1){
        printf("=");
    }
}
printf("\n");
printf("Dois:   |");
for (int i = 0; i < 20; i++){
    if(notas[i] == 2){
        printf("=");
    }
}
printf("\n");
printf("Tres:   |");
for (int i = 0; i < 20; i++){
    if(notas[i] == 3){
        printf("=");
    }
}
printf("\n");
printf("Quatro: |");
for (int i = 0; i < 20; i++){
    if(notas[i] == 4){
        printf("=");
    }
}
printf("\n");
printf("Cinco:  |");
for (int i = 0; i < 20; i++){
    if(notas[i] == 5){
        printf("=");
    }
}
printf("\n");*/

return 0;
}