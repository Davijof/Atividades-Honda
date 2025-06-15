#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//#include <math.h>
//#define M_PI 3.14159265358979323846

int main(){
    int numero_circulo = 0, numero_pontos = 0;
    double valor_pi = 0;

    printf("Estimativa de pi - Monte Carlo\n");
    printf("Digite a quantidade de pontos que serao utilizados na aproximacao: ");
    scanf("%d", &numero_pontos);

    srand(time(NULL));

    for (int i = 0; i < numero_pontos; i++) {
    double eixo_x = (double)rand() / RAND_MAX;
    double eixo_y = (double)rand() / RAND_MAX;
        //pra saber se ta dentro do circulo
        if(eixo_x * eixo_x + eixo_y * eixo_y <= 1){
            numero_circulo++;
        }
    }
    valor_pi = 4.0 * numero_circulo / numero_pontos;
    printf("Valor de pi: %lf", valor_pi);
}
 