#include <stdio.h>
//Davi José Oliveira Faria
int main() {
	float peso = 0.0, altura= 0.0 ,imc = 0.0;

	printf("Digite seu Peso: ");
	scanf("%f", &peso);

	printf("Digite sua Altura: ");
	scanf("%f", &altura);

	imc = peso / (altura * altura);
	printf("Seu IMC = %3.2f\n", imc);
	
	if(imc<18.5){
	    printf("Classicação IMC = Magreza\n");
	}
	else if(imc<=24.9 && imc>=18.5){
	    printf("Classificação IMC = Normal\n");
}
    else if(imc<=29.9 && imc>=25){
        printf("Classificação IMC = Sobrepeso\n");
        printf("Obesidade Grau 1");
    }
    else if(imc<= 39.9 && imc>= 30){
        printf("Classificação IMC = Obesidade\n");
        printf("Obesidade Grau 2");
    }
    else if(imc> 40){
        printf("Classificação IMC = Obesidade Grave\n");
        printf("Obesidade Grau 3");
    }    
    
	return 0;
}