#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student
{
    char name[20], surname[20], class[5];
    int year;
    char letter;
} s[100];

int load(char* filename)
{
    FILE* fp;
    int count = 0;

    fp = fopen(filename, "r");
    if (!fp)
    {
        printf("Error occured while opening file\n");
        return 0;
    }

    while (fscanf(fp, "%s %s %s %d %c",
        s[count].name,
        s[count].surname,
        s[count].class,
        &s[count].year,
        &s[count].letter) == 5)
    {
        count++;
        if (count >= 100) break;
    }

    fclose(fp);
    return count;
}

void task13()
{
    char* filename = "students.txt";
    int count = load(filename);

    if (count == 0) {
        printf("No data loaded or file is empty\n");
        return 1;
    }

    printf("Loaded %d students:\n", count);
    for (int i = 0; i < count; i++) {
        printf("%s %s %s %d %c\n",
            s[i].name, s[i].surname, s[i].class, s[i].year, s[i].letter);
    }

    // Проверка на однофамильцев в параллельных классах
    int found = 0;
    printf("\nChecking for same surname in parallel classes:\n");

    for (int i = 0; i < count; i++) {
        for (int j = i + 1; j < count; j++) {
            if (strcmp(s[i].surname, s[j].surname) == 0 &&
                s[i].year == s[j].year &&
                s[i].letter != s[j].letter) {

                printf("Found: %s %s (%d%c) and %s %s (%d%c)\n",
                    s[i].surname, s[i].name, s[i].year, s[i].letter,
                    s[j].surname, s[j].name, s[j].year, s[j].letter);
                found = 1;
            }
        }
    }

    if (!found) {
        printf("No students with same surname in parallel classes found\n");
    }
}