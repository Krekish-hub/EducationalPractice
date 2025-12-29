#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

// 11æ

void task01() {
    double x, y, z, a, b;

    printf("input through a space <x y z>: ");
    
    if (scanf("%lf %lf %lf", &x, &y, &z) != 3) {
        printf("Error: invalid input!\n");
        return;
    }

    a = log(fabs((y - sqrt(fabs(x))) * (x - y / (z + x * x / 4))));
    b = x - x * x / 6 + pow(x, 5) / 120;

    printf("a = %.4lf\n", a);
    printf("b = %.4lf\n", b);
}


// Program to compute values a and b based on user input x, y, z 
// and print the results with four decimal places.
// a = log(|(y - sqrt(|x|)) * (x - y / (z + x^2 / 4))|)
// b = x - x^2 / 6 + x^5 / 120
// Input is taken in a single line separated by spaces.
// Example input: 2.0 3.0 4.0
// Example output:
// a = 0.6931
// b = 1.3333
// If the input is invalid, an error message is displayed.
// Example invalid input: 2.0 three 4.0
// Example output for invalid input:
// Error: invalid input!
// Note: Ensure to include error handling for invalid inputs.
// test VS 2026 InteleliSense
// test GCC 13.2
// test Clang 16.0
// test MSVC 19.36
// test MinGW 9.0
// test C89 standard compliance
// test output formatting to four decimal places