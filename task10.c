#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// 445

int isPrime(int x) {
    if (x < 2) return 0;
    for (int i = 2; i * i <= x; i++) {
        if (x % i == 0)
            return 0;
    }
    return 1;
}

int input() {
    int n;
    printf("Input even n (>2): ");
    scanf("%d", &n);
    return n;
}

int goldbach(int n, int* p, int* q) {
    for (int i = 2; i <= n / 2; i++) {
        if (isPrime(i) && isPrime(n - i)) {
            *p = i;
            *q = n - i;
            return 1;
        }
    }
    return 0;
}

void output(int n, int ok, int p, int q) {
    if (ok) {
        printf("%d = %d + %d\n", n, p, q);
    }
    else {
        printf("Not %d\n", n);
    }
}

void task10() {
    int n, p, q;
    n = input();

    if (n <= 2 || n % 2 != 0) {
        printf("Error\n");
        return;
    }

    int ok = goldbach(n, &p, &q);
    output(n, ok, p, q);
}
