#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// 379á

void task08() {
    int n, m;
    double a[100][100];
    double b[100];

    printf("Input n and m: ");
    if (scanf("%d %d", &n, &m) != 2) {
        printf("Error: invalid input!\n");
        return;
    }

    printf("Input matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%lf", &a[i][j]);
        }
    }

    for (int i = 0; i < n; i++) {
        b[i] = 1.0;
        for (int j = 0; j < m; j++) {
            b[i] *= a[i][j];
        }
    }

    printf("Result:\n");
    for (int i = 0; i < n; i++) {
        printf("b%d = %.6lf\n", i + 1, b[i]);
    }
}
