#include "config.h"

// Problem 7
void examProblem7(void) {
    printf("Problem 7\n");
    printf("Program Output:\n");
    printsep();
    int integer1;
    int integer2;
    printf( "Enter first integer\n" );
    printf("(user inputs 4)\n");
    integer1 = 4;
    printf( "Enter the second integer\n" );
    printf("(user inputs 6)\n");
    integer2 = 6;
    int sum;
    sum = integer1 + integer2;
    printf( "Sum is %d\n", sum );
    printsep(); println();
}