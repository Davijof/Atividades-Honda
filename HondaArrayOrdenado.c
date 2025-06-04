#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int funcinit(int func[], int x);
void bubblesort(int func[], int x);

int main(){
    int Array[100] = {0};

    printf("Funcao aleatoria: \n");
    funcinit(Array, 100);
    printf("Ordenada: \n");
    bubblesort(Array, 100);
    printf("\n");

    return 0;
}

int funcinit(int func[], int x){
    srand(time(0));
    for ( int i = 0; i < x; i++){
        func[i] = rand() % 99;
        printf("%d ", func[i]);
    }
    printf("\n");
}

void bubblesort(int func[], int x){
    for ( int i = 0; i < x - 1; i++){
        for (int j = 0; j < x - i - 1; j++) {
           if (func[j] > func[j + 1]){
               int aux = func[j];
               func[j] = func[j+1];
               func[j+1] = aux;
           }
       }
   }
   for (int i = 0; i < x; i++){
    printf("%d ", func[i]);
   }
}
