/* This is done by TengJiaYao and used to muitple to matrix*/
#include <stdio.h>

/*the algorithm to muitple two matrix*/
void multiplyMatrices(int A[][2], int B[][3], int result[][3]) {
    int i = 0;
    int j = 0;
    int k = 0;
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 3; j++) {
            result[i][j] = 0;
            for (k = 0; k < 2; k++) {
                result[i][j] += A[i][k] * B[k][j];
            }
        }
    }
}

int main() {
    int i = 0;
    int j = 0;
    int A[2][2] = {{1, 2}, {3, 4}}; /*matrix a*/
    int B[2][3] = {{5, 6, 7}, {8, 9, 10}}; /*matrix b*/
    int result[2][3];

    multiplyMatrices(A, B, result);

    /*Print the result*/
    printf("Result Matrix:\n");
    for (i = 0; i < 2; i++) { /*2 row*/
        for (j = 0; j < 3; j++) { /*3 column*/
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}
