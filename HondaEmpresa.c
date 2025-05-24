#include <stdio.h>

int main() {
	//salario Base
	float salario = 0, insspatronal = 0, rat = 0, terceiros = 0, fgts = 0, dterceiro = 0, ferias = 0, multafgts = 0, total = 0;
	printf("Informe seu salario bruto: ");
	scanf("%f", &salario);

	//calculos do empregador
	insspatronal = salario * 0.2;
	rat = salario * 0.01;
	terceiros = salario * 0.058;
	fgts = salario * 0.08;
	dterceiro = salario/12;
	ferias = salario/12 + (salario/12)/3;
	multafgts = salario * 0.032;
	//total
	total = insspatronal + rat + terceiros + fgts + dterceiro + ferias + multafgts;

	//prints
	printf("tributos e reservas pagos por parte do empregador\n");
	printf("Inss patronal: %.2f\n", insspatronal);
	printf("RAT: %.2f\n", rat);
	printf("Terceiros: %.2f\n", terceiros);
	printf("FGTS: %.2f\n", fgts);
	printf("Decimo terceiro: %.2f\n", dterceiro);
	printf("Ferias remuneradas: %.2f\n", ferias);
	printf("Multa FGTS: %.2f\n", multafgts);

	printf("\nTotal pago pelo empregador: %.2f", total);
}