#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// 210

void task05() {
    int n;

    printf("Input n: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Error: invalid input!\n");
        return;
    }

    double arr[1000];
    printf("Input %d numbers: ", n);
    for (int i = 0; i < n; i++) {
        if (scanf("%lf", &arr[i]) != 1) {
            printf("Error: invalid input!\n");
            return;
        }
    }

    printf("Positions of local maxima: ");
    int found = 0;
    for (int j = 1; j <= n - 2; j++) {
        if (arr[j - 1] < arr[j] && arr[j] > arr[j + 1]) {
            printf("%d ", j + 1);
            found = 1;
        }
    }

    if (!found) {
        printf("None");
    }

    printf("\n");
}
