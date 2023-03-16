#include "config.h"

unsigned char start = 1;

int main(void) {
    int problem;
    do {
        printf("Enter the problem number you'd like to see (1-17). Enter 0 for T/F, or -1 to exit.\n");
        scanf("%d", &problem);
        if (problem == -1) break;
        else if (problemSelector(problem) == -1)
            printf("error: unknown value.");
        println();
    } while(1);
    puts("Goodbye.");
    return 0;
}