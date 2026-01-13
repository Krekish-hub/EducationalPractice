#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

// 84â: sin õ + sin sin x + ... + sin sin ...sin x;

void task04() {
    int n;
    double x;
    double sum = 0.0;
    double current;

    printf("Input n and x: ");

    if (scanf("%d %lf", &n, &x) != 2) {
        printf("Error: invalid input!\n");
        return;
    }

    if (n <= 0) {
        printf("Error: invalid input!\n");
        return;
    }

    current = x;

    for (int i = 1; i <= n; i++) {
        current = sin(current);
        sum += current;
    }

    printf("Result: %.6lf\n", sum);
}