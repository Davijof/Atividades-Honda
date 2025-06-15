#include <stdio.h>
#include <stdlib.h>
int main() {
	float base = 0, valeT = 0, inss = 0, irpf = 0, csindical = 0, bcirpf = 0, auxilioA = 0, planosaudeempresa = 0, planosaudepessoa = 0, liquido = 0, ferias = 0, dterceiro = 0;
	// csindicalTrueFalse, valetTrueFalse...
	int cstf = 0, vttf = 0, aatf = 0, pstf = 0, fdtf = 0, emptf = 0;
	//empregador
	float insspatronal = 0, fgts = 0, feriasprovisao = 0, dterceiroprovisao = 0, multafgts = 0, terceirosrat = 0, totalencargos = 0;
	printf("Digite seu salario base: ");
	scanf("%f", &base);
	//calculo do empregador
	insspatronal = base * 0.20;
	fgts = base * 0.08;
	feriasprovisao = base * 0.1111;
	dterceiroprovisao = base * 0.0833;
	multafgts = base * 0.032;
	terceirosrat = base * 0.068;

	totalencargos = insspatronal + fgts + feriasprovisao + dterceiroprovisao + multafgts + terceirosrat;
	//descontos/beneficios obrigatC3rios

	//inss
	if(base <= 1518) {
		inss = base*0.075;
	}
	else if(base > 1518 && base <= 2793.88) {
		inss = ((base - 1518) * 0.09) + 113.85;
	}
	else if(base > 2793.88 && base <= 4190.83) {
		inss = ((base - 2793.88) * 0.12) + 113.85 + 114.83;
	}
	else if(base > 4190.83) {
		inss = ((base - 4190.83) * 0.14) + 113.85 + 114.83 + 167.634;
	}

	//irpf
	bcirpf = base - inss;
	if(base <=2259.20) {
		irpf = 0;
	}
	else if(bcirpf >2259.20 && bcirpf <= 2826.65) {
		irpf = bcirpf*0.075 - 169.44;
	}
	else if(bcirpf > 2826.65 && bcirpf <= 3751.05) {
		irpf = bcirpf*0.15 - 381.44;
	}
	else if(bcirpf >3751.05 && bcirpf <= 4664.68) {
		irpf = bcirpf*0.225 - 662.77;
	}
	else if(bcirpf >4664.68) {
		irpf = bcirpf*0.275 - 896;
	}


	//descontos/beneficios facultativos

	//vale transporte
	printf("Possui vale transporte?(responda 1 p/ sim ou 2 p/ nao\n)");
	scanf("%d", &vttf);
	if(vttf == 1) {
		valeT = base * 0.06;
		printf("Seu vale transporte vale : %.2f\n", valeT);
	}
	else if(vttf == 2) {
		printf("Vale transporte: nao possui\n");
	}
	else {
		printf("Valor invalido\n");
	}

	//auxilio alimentacao
	printf("Possui auxilio alimentacao?(responda 1 p/ sim ou 2 p / nao\n)");
	scanf("%d", &aatf);
	if(aatf == 1) {
		printf("Digite o valor do seu auxilio alimentacao: \n");
		scanf("%f", &auxilioA);
	}
	else if(aatf == 2) {
		printf("Auxilio alimentacao: nao possui\n");
	}
	else {
		printf("Valor invalido\n");
	}

	//plano de saude
	printf("A empresa lhe oferece: 1)Plano de saude total, 2)Plano de saude parcial, 3)Nao oferece plano de saude mas eu pago, 4)Nao possuo plano de saude\n");
	scanf("%d", &pstf);
	if(pstf == 1) {
		printf("Digite o valor do seu plano de saude: \n");
		scanf("%f", &planosaudeempresa);
	}
	else if(pstf == 2) {
		printf("Digite o valor que voce paga no plano de saude: \n");
		scanf("%f", &planosaudepessoa);
		printf("Digite o valor total do plano de saude: \n");
		scanf("%f", &planosaudeempresa);
		planosaudeempresa = planosaudeempresa - planosaudepessoa;
	}
	else if(pstf == 3) {
		printf("Digite o valor que voce paga no plano de saude\n");
		scanf("%f", &planosaudepessoa);
	}
	else if(pstf == 4) {
		printf("Plano de saude: nao possui\n");
	}
	else {
		printf("Valor invalido\n");
	}

	//contribuicao sindical
	printf("Deseja pagar a contribuicao sindical?(responda 1 p/ sim ou 2 p/ nao\n)");
	scanf("%d", &cstf);
	if (cstf == 1) {
		csindical = base / 30 / 12 ;
	}
	else if(cstf == 2) {
		printf("Contribuicao Sindical: Negada\n");
		csindical = 0;
	}
	else {
		printf("Valor invalido\n");
	}
	printf("Deseja adicionar ferias remuneradas e decimo terceiro no salario liquido?(responde 1 p/sim ou 2 p/nao \n");
	scanf("%d", &fdtf);
	if(fdtf == 1) {
		ferias = (bcirpf + (bcirpf/3)) / 12;
		dterceiro = base / 12;
	}
	else if(fdtf == 2) {
		printf("Ferias remuneradas e decimo terceiro nao serao adicionados ao salario liquido\n");
	}
	else {
		printf("Valor invalido\n");
	}
	//conclusao
	system("cls");
	system("clear");
	printf("\nSalario bruto = %.2f\n", base);

	printf("\nDescontos: \n");
	printf("Inss: %.2f\n",inss);
	printf("Irpf: %.2f\n",irpf);
	if(valeT > 0) {
		printf("Vale Transporte: %.2f\n", valeT);
	}
	if(csindical > 0) {
		printf("Contribuicao Sindical: %.2f\n", csindical);
	}
	if(planosaudepessoa > 0) {
		printf("Plano de Saude: %.2f\n", planosaudepessoa);
	}
	printf("\nBeneficios: \n");
	if(ferias > 0) {
		printf("Ferias Remuneradas: %.2f\n", ferias);
		printf("Decimo Terceiro: %.2f\n", dterceiro);
	}
	if(auxilioA > 0) {
		printf("Auxilio Alimentacao: %.2f\n", auxilioA);
	}
	liquido = base - planosaudepessoa - csindical - valeT - inss - irpf + auxilioA + dterceiro + ferias;
	printf("\nSalario liquido = %.2f\n", liquido);

	printf("\nDeseja ver a parte paga pelo empregador?(responde 1 p/sim ou 2 p/nao \n");
	scanf("%d", &emptf);

	if(emptf == 1) {
		system("cls");
		system("clear");
		printf("Inss patronal: %.2f\n", insspatronal);
		printf("Fgts: %.2f\n", fgts);
		printf("Provisao ferias: %.2f\n", feriasprovisao);
		printf("Provisao 13B:: %.2f\n", dterceiroprovisao);
		printf("Multa Fgts: %.2f\n", multafgts);
		printf("Terceiros + RAT: %.2f\n", terceirosrat);
		printf("Total de encargos do empregador = %.2f\n", totalencargos);
	}
	else if(emptf == 2) {
		printf("Fim.\n");
	}
	else {
		printf("Valor invalido\n");
	}
	return 0;

}