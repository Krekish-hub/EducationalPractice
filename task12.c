#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

void task12() {
    FILE* f1, * f2, * h;
    char ch;

    f1 = fopen("f1.txt", "r+");
    f2 = fopen("f2.txt", "r+");
    h = fopen("h.txt", "w+");

    if (f1 == NULL || f2 == NULL || h == NULL) {
        printf("Error opening files!\n");
        if (f1) fclose(f1);
        if (f2) fclose(f2);
        if (h) fclose(h);
        return;
    }

    while ((ch = fgetc(f1)) != EOF) {
        fputc(ch, h);
    }

    rewind(f1);
    rewind(h);

    while ((ch = fgetc(f2)) != EOF) {
        fputc(ch, f1);
    }

    rewind(f2);
    rewind(h);

    while ((ch = fgetc(h)) != EOF) {
        fputc(ch, f2);
    }

    fclose(f1);
    fclose(f2);
    fclose(h);

    printf("Files swapped successfully!\n");
}
