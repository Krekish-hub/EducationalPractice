#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void task09() {
    int m;
    double A[50][50], C[50][50];

    printf("Input m: ");
    scanf("%d", &m);

    printf("Input matrix A:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%lf", &A[i][j]);
        }
    }

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < m; j++) {
            C[i][j] = 0.0;
            for (int k = 0; k < m; k++) {
                C[i][j] += A[i][k] * A[k][j];
            }
        }
    }

    printf("Result matrix A*A:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < m; j++) {
            printf("%.2lf ", C[i][j]);
        }
        printf("\n");
    }
}
