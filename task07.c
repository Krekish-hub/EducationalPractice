#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void task07() {
    char s[256];
    int i = 0;
    int curLen = 0;
    int minLen = 1000000;

    printf("Input string:\n");
    fgets(s, 256, stdin);

    while (s[i] != '\0') {
        if (s[i] != ' ' && s[i] != '\n') {
            curLen++;
        }
        else {
            if (curLen > 0 && curLen < minLen) {
                minLen = curLen;
            }
            curLen = 0;
        }
        i++;
    }

    if (curLen > 0 && curLen < minLen) {
        minLen = curLen;
    }

    printf("Result: %d\n", minLen);
}
