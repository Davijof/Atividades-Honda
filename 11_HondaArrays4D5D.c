#include <stdio.h>
#include <stdlib.h>

int main(){
    int array3d[2][3][3] = {0};
    int array4d[2][2][3][3] = {0};
    int array5d[2][2][2][3][3] = {0};

    //array3d
    printf("Array 3d: \n");
    for (int i = 0; i < 2; i++){
        for (int j = 0; j < 3; j++){
            for (int k = 0; k < 3; k++){
                array3d[i][j][k] = i + j + k;
                printf("[%d] [%d] [%d] = %d\n", i, j, k, array3d[i][j][k]);
            }
        }
    }

    //array4d
    printf("\nArray 4d: \n");
    for (int i = 0; i < 2; i++){
        for (int t = 0; t < 2; t++){
            for (int j = 0; j < 3; j++){
                for (int k = 0; k < 3; k++){
                    array4d[i][t][j][k] = i + t + j + k;
                    printf("[%d] [%d] [%d] [%d] = %d\n", i, t, j, k, array4d[i][t][j][k]);

                }
            }
        }
    }

    //array5d
    printf("\nArray 5d: \n");
    for (int i = 0; i < 2; i++){
        for (int t = 0; t < 2; t++){
            for(int x = 0; x < 2; x++){
                for (int j = 0; j < 3; j++){
                    for (int k = 0; k < 3; k++){
                        array5d[i][t][x][j][k] = i + t + x + j + k;
                        printf("[%d] [%d] [%d] [%d] [%d] = %d\n", i, t, x, j, k, array5d[i][t][x][j][k]);

                    }
                }
            }
        }
    }


    return 0;
}