#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//Exercicios: Simular arrays tridimensionais utilizando arrays unidimensionais

void funcinit(int x, int func[]);

int main() {
	int linha = 0, coluna = 0, layer = 0;

	int linha1_l1[5] = {0};
	int linha2_l1[5] = {0};
	int linha3_l1[5] = {0};

	int linha1_l2[5] = {0};
	int linha2_l2[5] = {0};
	int linha3_l2[5] = {0};


	funcinit(5, linha1_l1);
	funcinit(5, linha2_l1);
	funcinit(5, linha3_l1);

    printf("\n");

	funcinit(5, linha1_l2);
	funcinit(5, linha2_l2);
	funcinit(5, linha3_l2);

    printf("\n");

	printf("Linha 1-3: \n");
	scanf("%d", &linha);
	printf("Coluna 1-5 \n");
	scanf("%d", &coluna);
    printf("Layer 1-2: \n");
    scanf("%d", &layer);

	if(layer == 1) {

		if (linha == 1) {
			switch(coluna) {

			case 1:
				printf("%d", linha1_l1[0]);
				break;

			case 2:
				printf("%d", linha1_l1[1]);
				break;

			case 3:
				printf("%d", linha1_l1[2]);
				break;

			case 4:
				printf("%d", linha1_l1[3]);
				break;

			case 5:
				printf("%d", linha1_l1[4]);
				break;

			}
		}

		else if (linha == 2) {
			switch(coluna) {

			case 1:
				printf("%d", linha2_l1[0]);
				break;

			case 2:
				printf("%d", linha2_l1[1]);
				break;

			case 3:
				printf("%d", linha2_l1[2]);
				break;

			case 4:
				printf("%d", linha2_l1[3]);
				break;

			case 5:
				printf("%d", linha2_l1[4]);
				break;

			}
		}

		else if (linha == 3) {
			switch(coluna) {

			case 1:
				printf("%d", linha3_l1[0]);
				break;

			case 2:
				printf("%d", linha3_l1[1]);
				break;

			case 3:
				printf("%d", linha3_l1[2]);
				break;

			case 4:
				printf("%d", linha3_l1[3]);
				break;

			case 5:
				printf("%d", linha3_l1[4]);
				break;

			}
		}
	}

    else if(layer == 2){

        if (linha == 1) {
			switch(coluna) {

			case 1:
				printf("%d", linha1_l2[0]);
				break;

			case 2:
				printf("%d", linha1_l2[1]);
				break;

			case 3:
				printf("%d", linha1_l2[2]);
				break;

			case 4:
				printf("%d", linha1_l2[3]);
				break;

			case 5:
				printf("%d", linha1_l2[4]);
				break;

			}
		}

		else if (linha == 2) {
			switch(coluna) {

			case 1:
				printf("%d", linha2_l2[0]);
				break;

			case 2:
				printf("%d", linha2_l2[1]);
				break;

			case 3:
				printf("%d", linha2_l2[2]);
				break;

			case 4:
				printf("%d", linha2_l2[3]);
				break;

			case 5:
				printf("%d", linha2_l2[4]);
				break;

			}
		}

		else if (linha == 3) {
			switch(coluna) {

			case 1:
				printf("%d", linha3_l2[0]);
				break;

			case 2:
				printf("%d", linha3_l2[1]);
				break;

			case 3:
				printf("%d", linha3_l2[2]);
				break;

			case 4:
				printf("%d", linha3_l2[3]);
				break;

			case 5:
				printf("%d", linha3_l2[4]);
				break;

			}
		}
    }

	else if(linha < 1 || linha > 3 ) {
		printf("Valor de linha invalido!");
	}

	else if (coluna < 1 || coluna > 5) {
		printf("Valor de coluna invalido");
	}

    else if (layer < 1 || layer > 2) {
        printf("Valor de layer invalido!");
    }

	return 0;

}

void funcinit(int x, int func[]) {
	for ( int i = 0; i < x; i++) {
		func[i] = rand() % 9;
		printf("%d ", func[i]);
	}
	printf("\n");
}