#include <stdio.h>
#include <limits.h>

#define N 5

int find_max_zh(int matrix[N][N]) {
    int max_value = INT_MIN;

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if ((j <= i && i <= N / 2) || (j <= N - i - 1 && i > N / 2)) {
                if (matrix[i][j] > max_value) {
                    max_value = matrix[i][j];
                }
            }
        }
    }

    return max_value;
}

void task11() {
    int matrix[N][N] = {
        {1, 2, 3, 4, 5},
        {6, 7, 8, 9, 10},
        {11, 12, 13, 14, 15},
        {16, 50, 18, 19, 20},
        {21, 22, 23, 60, 25}
    };

    int result = find_max_zh(matrix);
    printf("MAX object: %d\n", result);
}