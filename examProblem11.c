#include "config.h"

// Problem 11
void examProblem11(void) {
    printf("Problem 11\n");
    printf("Program Output:\n");
    printsep();
    unsigned int counter = 1;   // <- program code
    do {                        // <-
        printf("%u ", counter); // <-
    }                           // <-
    while (++counter <= 10);    // <-
    println();                  // <- (added for formatting purposes)
    printsep();
}