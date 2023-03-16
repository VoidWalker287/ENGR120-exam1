#include "config.h"

// Problem 2
void examProblem2(void) {
    printf("Problem 2\n");
    printf("1: x = %.1f", 25.0 * 3.0 / 2.5);
    println();
    double x = 10.0;
    printf("2: x = %.1f -> ", x);
    x = x - 20.5;
    printf("x = %.1f", x);
    println();
    int y, a = 1, b = 2, c = 3, d = 4, e = 6;
    y = a + b + c + d + e / 5;
    printf("3: y = %d", y);
    println();
    int z; /* a = 1, b = 2, c = 3, d = 4, e = 6 */
    z = ( a + b + c + d + e) / 5;
    printf("4: z = %d", z);
    println();
}