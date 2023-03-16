#include "config.h"

// True or False Questions
void examTrueFalse(void) {
    printf("True or False Questions\n");
    int answers[] = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    for (int i = 0; i < 10; i++) {
        char *answer = answers[i] ? "true" : "false";
        printf("%d: %s.\n", i + 1, answer);
    }
}