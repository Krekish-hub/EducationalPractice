#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// 59â

void task02() {
    double x, y;

    printf("Input x and y: ");
    if (scanf("%lf %lf", &x, &y) != 2) {
        printf("Error: invalid input!\n");
        return;
    }

    if (x >= -1 && x <= 1 && y >= -1 && y <= 1) {
        printf("shtrih oblast'\n");
    }
    else {
        printf("dont shtrih oblast'\n");
    }
}
