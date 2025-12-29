#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "tasks.h" // tasks namespace

int main() {
    int n = -1;

    while (n != 0) {
        printf("\nInput task number <1 to 12>, or 0 to EXIT: ");

        if (scanf("%d", &n) != 1) {
            printf("Error: invalid input!\n");

            while (getchar() != '\n');
            continue;
        }

        if (n == 0) {
            printf("Goodbye!\n");
            break;
        }

        switch (n) {
        case 1: task01(); break;
        case 2: task02(); break;
        case 3: task03(); break;
        case 4: case 5: case 6: case 7: case 8:
        case 9: case 10: case 11: case 12:
            printf("%d not task\n", n);
            break;
        default:
            printf("Invalid task number. Please enter 1-12 or 0 to exit\n");
        }
    }

    return 0;
}
