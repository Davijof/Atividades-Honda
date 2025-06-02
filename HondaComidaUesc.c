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

for (int i = 1; i < 6; i++){
    if(numeros [i] > max){
        max = numeros [i];
        nota = i;
    }
}

printf("\nNota da comida da uesc = %d", nota);

return 0;
}