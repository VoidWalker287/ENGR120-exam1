#include "config.h"

// Problem 13
void examProblem13(void) {
    printf("Problem 13\n");
    printf("1: American Standard (for) Information Interchange");
    println();
    char name[] = {'K', 'y', 'l', 'e', 0};
    printf("2: %X %X %X %X -> %s",
           name[0], name[1], name[2], name[3], name);
    println();
}