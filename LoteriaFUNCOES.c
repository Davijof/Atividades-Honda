#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <stdbool.h>

void NumUsuario(int v[6]);
void NumRandom(int nums[6]);

int main() {
    int v[6];
    int nums[6];
    int tentativas = 0;
    bool acerto;

    srand(time(NULL));

    NumUsuario(v);

    do {
        tentativas++;

        NumRandom(nums);

        acerto = true;
        for (int i = 0; i < 6; i++) {
            bool encontrado = false;
            for (int j = 0; j < 6; j++) {
                if (v[i] == nums[j]) {
                    encontrado = true;
                    break;
                }
            }
            if (!encontrado) {
                acerto = false;
                break;
            }
        }

        printf("T%d\n", tentativas);

    } while (!acerto);

    printf("tentativas %d\n", tentativas);
    printf("numeros escolhidos: \n");
    for (int i = 0; i < 6; i++) printf("%02d ", v[i]);
    printf("\nnumeros sorteados:  \n");
    for (int i = 0; i < 6; i++) printf("%02d ", nums[i]);

    return 0;
}

// funçao usuario
void NumUsuario(int v[6]) {
    printf("Digite seis numeros entre 1 e 60 separados por espacos: ");
    scanf("%d %d %d %d %d %d", &v[0], &v[1], &v[2], &v[3], &v[4], &v[5]);
}

// funçao numero random
void NumRandom(int nums[6]) {
    int r;
    bool repete;
    
    for (int i = 0; i < 6; i++) {
        do {
            r = rand() % 60 + 1;
            repete = false;
            for (int j = 0; j < i; j++) {
                if (nums[j] == r) {
                    repete = true;
                    break;
                }
            }
        } while (repete);
        nums[i] = r;
    }
}