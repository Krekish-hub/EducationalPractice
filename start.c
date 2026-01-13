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
		case 4: task04(); break;
		case 5: task05(); break;
        case 6: task06(); break;
		case 7: task07(); break;
		case 8: task08(); break;
		case 9: task09(); break;
		case 10: task10(); break;
            printf("%d not task\n", n);
            break;
        default:
            printf("Invalid task number. Please enter 1-12 or 0 to exit\n");
        }
    }

    return 0;
}
