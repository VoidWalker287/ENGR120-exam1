#include "config.h"

// Problem 10
void examProblem10(void) {
    printf("Problem 10\n");
    printf("Program Output:\n");
    printsep();
    unsigned int x;
    for (x = 1; x <= 10; ++ x) {
        if (x == 5) {
            break;
        }
        printf("%u ", x);
    }
    printf("\nBroke out of loop at x = = %u\n", x);
    printsep();
}
