#include <stdio.h>
#include <stdlib.h>

int main() {

    // Array 1D
    printf("Array 1D:\n");
    int array1d[1000000];
    for (int i = 0; i < 1000000; i++) {
        array1d[i] = i;
        if (i % 200000 == 0) {
            printf("[%d] = %d\n", i, array1d[i]);
        }
    }

    // Array 2D
    printf("\nArray 2D:\n");
    int array2d[1000][1000];
    for (int i = 0; i < 1000; i++) {
        for (int j = 0; j < 1000; j++) {
            array2d[i][j] = i + j;
            if (i % 250 == 0 && j % 250 == 0) {
                printf("[%d] [%d] = %d\n", i, j, array2d[i][j]);
            }
        }
    }

    // Array 3D
    printf("\nArray 3D:\n");
    int array3d[100][100][100];
    for (int i = 0; i < 100; i++) {
        for (int j = 0; j < 100; j++) {
            for (int k = 0; k < 100; k++) {
                array3d[i][j][k] = i + j + k;
                if (i % 25 == 0 && j % 25 == 0 && k % 25 == 0) {
                    printf("[%d] [%d] [%d] = %d\n", i, j, k, array3d[i][j][k]);
                }
            }
        }
    }

    // esse tamanho extrapolou o limite: o programa nao compilou

    return 0;
}
