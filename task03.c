#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

// 70а задание с часами и стрелками

void task03() {
    int m, n;
    double t;

    printf("Input m and n: ");

    if (scanf("%d %d", &m, &n) != 2) {
        printf("Error: invalid input!\n");
        return;
    }

    if (m <= 0 || m > 12 || n < 0 || n >= 60) {
        printf("Error: m = 1-12, n = 0-59!\n");
        return;
    }

    double hour_angle = m % 12 * 30.0 + n * 0.5;
    double minute_angle = n * 6.0;

    t = (hour_angle - minute_angle) / 5.5;
    if (t < 0) t += 65.0 + 5.0 / 11.0;

    printf("Minimum time: %d minute\n", (int)ceil(t));
}