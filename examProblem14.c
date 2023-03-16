#include "config.h"

// Problem 14
void program14(int x_val, int y_val);
void examProblem14(void) {
    printf("Problem 14\n");
    int x_values[] = {10, -5, 8}, y_values[] = {23, -5, 1};
    for (int i = 0; i < 3; i++) {
        printf("%d: x = %d, y = %d\nProgram Output:\n",
               i + 1, x_values[i], y_values[i]);
        printsep();
        program14(x_values[i], y_values[i]);
        printsep();
    }
}
void program14(int x_val, int y_val) {
    int x, y;
    int temp;
    printf("The values are \n");
    printf("(user inputs %d)\n", x_val);
    x = x_val;
    printf("(user inputs %d)\n", y_val);
    y = y_val;
    if (x > y) {
        temp = x;
        x = y;
        y = temp;
    }
    printf("The values are \n");
    printf("x =%d\n" , x);
    printf("y =%d\n" , y);
}