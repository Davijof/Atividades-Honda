#include <stdio.h>

int main() {
    float gasolina = 0, etanol = 0, razao = 0, consumogas = 0, consumoetanol = 0, consumorazao = 0, gnv = 0, consumognv = 0;
    int gnvTF = 0;
    printf("Seu veiculo tem suporte para GNV? [1] Sim, [2] Nao: ");
    scanf("%d", &gnvTF);
    if (gnvTF == 1) {
        printf("Use GNV");
    }
    else if (gnvTF == 2) {
        printf("Veiculo nao possui suporte para GNV\n");

        printf("De acordo com a tabela do INMETRO, informe\n");
        printf("Quilometragem por litro p/ gasolina: ");
        scanf("%f", &consumogas);
        printf("Quilometragem por litro p/ etanol: ");
        scanf("%f", &consumoetanol);

        consumorazao = consumoetanol / consumogas;

        printf("\nPorcentagem da razao = %.2f \n", consumorazao * 100);
        printf("\nDigite o valor da gasolina: ");
        scanf("%f", &gasolina);
        printf("Digite o valor do etanol: ");
        scanf("%f", &etanol);

        razao = gasolina * consumorazao;

        if (etanol > razao) {
            printf("Use gasolina");
        }
        else if (etanol <= razao) {
            printf("Use etanol");
        }
    }
    return 0;
}