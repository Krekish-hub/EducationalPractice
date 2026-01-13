#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// 338å

void task06() {
    int n;
    int a[25], b[1000];
    int i, j;

    printf("Input n: ");
    if (scanf_s("%d", &n) != 1) {
        printf("Error: invalid input!\n");
        return;
    }

    printf("Input a1..a25:\n");
    for (i = 0; i < 25; i++) {
        if (scanf_s("%d", &a[i]) != 1) {
            printf("Error: invalid input!\n");
            return;
        }
    }

    printf("Input b1..bn:\n");
    for (i = 0; i < n; i++) {
        if (scanf_s("%d", &b[i]) != 1) {
            printf("Error: invalid input!\n");
            return;
        }
    }

    i = 0;
    for (j = 0; j < n && i < 25; j++) {
        if (b[j] == a[i]) {
            i++;
        }
    }

    if (i == 25) {
        printf("YES\n");
    }
    else {
        printf("NO\n");
    }
}