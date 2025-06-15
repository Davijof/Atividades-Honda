#include <stdio.h>
#include <math.h>

int main(){
    int v1 = 3, v2 = 2, v3 = 3 ,v4 = 2 ,v5 = 3, blocos, total;
    printf("Selecione o numero de discos, 3 , 4 ou 5: ");
    scanf("%d", &blocos);
    total = pow (2, blocos) - 1;
    
    for(int mov = 0; mov < total; ++mov){
        if(mov % 2 == 0){
            printf("Passo %d:Mova o Bloco 1 para a Torre %d\n", mov + 1, v1);   
            v1 = v1 - 1;
            if (v1 == 0){
            v1 = 3;}
        }
        if((mov + 3) % 4 == 0 ){ 
            printf("Passo %d:Mova o Bloco 2 para a Torre %d\n", mov + 1, v2);
            v2 = v2 + 1;
            if (v2 == 4){
            v2 = 1;}
        }
        if((mov + 13) % 8 == 0){
            printf("Passo %d:Mova o Bloco 3 para a Torre %d\n", mov + 1, v3);
            v3 = v3 - 1;
            if (v3 == 0){
            v3 = 3;}

        } 
        if((mov + 25) % 16 == 0){
            printf("Passo %d:Mova o Bloco 4 para a Torre %d\n", mov + 1, v4);
            v4 = v4 + 1;
            if (v4 == 4){
            v4 = 1;}
        }
        if((mov + 49) % 32 == 0){
            printf("Passo %d:Mova o Bloco 5 para a Torre %d\n", mov + 1, v5);
            v5 = v5 - 1;
            if (v5 == 0){
            v5 = 3;}
        }   
    }

    
    return 0;
}