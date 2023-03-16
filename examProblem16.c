#include "config.h"

// Problem 16
void program16(char class_val);
void examProblem16(void) {
    printf("Problem 16\n");
    printf("1: switch statement\n");
    printf("2 - Program Output:\n");
    printsep();
    program16('d');
    printsep();
}
void program16(char class_val) {
    char class;
    printf("Enter first character of serial number> ");
    printf("(user inputs %c)\n", class_val);
    class = class_val;
    printf("Ship class is %c: ", class);
    switch (class) {
        case 'B':
        case 'b':
            printf("Battleship\n");
            break;
        case 'C':
        case 'c':
            printf("Cruiser\n");
            break;
        case 'D':
        case 'd':
            printf("Destroyer\n");
            break;
        case 'F':
        case 'f':
            printf("Frigate\n");
            break;
        default:
            printf("Unknown\n");
    }
}