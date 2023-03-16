#include <stdio.h>
#include "config.h"

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

// Problem 1
void examProblem1(void) {
    printf("Problem 1\n");
    // Part 1
    printf("1:%6d", 234);
    println();
    // Part 2
    printf("2:%6d", -234);
    println();
    // Part 3
    printf("3:%7.3f", 3.142);
    println();
    // Part 4
    printf("4:%6.2f", -9.54);
    println();
}

// Problem 2
void examProblem2(void) {
    printf("Problem 2\n");
    // Part 1
    printf("1: x = %.1f", 25.0 * 3.0 / 2.5);
    println();
    // Part 2
    double x = 10.0;
    printf("2: x = %.1f -> ", x);
    x = x - 20.5;
    printf("x = %.1f", x);
    println();
    // Part 3
    int y, a = 1, b = 2, c = 3, d = 4, e = 6;
    y = a + b + c + d + e / 5;
    printf("3: y = %d", y);
    println();
    // Part 4
    int z; /* a = 1, b = 2, c = 3, d = 4, e = 6 */
    z = ( a + b + c + d + e) / 5;
    printf("4: z = %d", z);
    println();
}

// Problem 3
void examProblem3(void) {
    printf("Problem 3\n");
    printf("Order: Group 4, Group 1, Group 2, Group 3");
    println();
}

// Problem 4
void examProblem4(void) {
    printf("Problem 4\n");
    printf("1 - Standard Header Files:\n");
    printf("(a) none");
    println();
    printf("(b) stdlib.h");
    println();
    printf("(c) math.h");
    println();
    printf("(d) math.h");
    println();
    printf("2: fabs() returns type double, abs() returns type int.");
    println();
}

// Problem 5
void examProblem5(void) {
    printf("Problem 5\n");
    // Program 1
    printf("Program 1 Output:\n");
    printsep();
    printf("Welcome to C!\n"); // <- program 1 code
    printsep(); println();
    printf("Program 2 Output:\n");
    printsep();
    printf( "Welcome " );    // <- program 2 code
    printf( "to C!\n" );    // <-
    printsep(); println();
    printf("Program 3 Output:\n");
    printsep();
    printf("Welcome\nto\nC!\n"); // <- program 3 code
    printsep();
}

// Problem 6
void examProblem6(void) {
    printf("Problem 6\n");
    printf("1: m = (a + b + c + d + e) / 5");
    println();
    printf("2 - Order of operators: \n");
    printf("(1): a x b");
    println();
    printf("(2): x/w");
    println();
    printf("(3): q + (2)");
    println();
    printf("(4): (3) - y");
    println();
    printf("(5): (1) mod (4)");
    println();
    printf("(6): z = (5)");
    println();
}

// Problem 7
void examProblem7(void) {
    printf("Problem 7\n");
    printf("Program Output:\n");
    printsep();
    int integer1;                               // <- program code
    int integer2;                               // <-
    printf( "Enter first integer\n" );          // <-
    printf("(user inputs 4)\n");                // <- scanf("%d", &integer1);
    integer1 = 4;                               // <-
    printf( "Enter the second integer\n" );     // <-
    printf("(user inputs 6)\n");                // <- scanf("%d", &integer2);
    integer2 = 6;                               // <-
    int sum;                                    // <-
    sum = integer1 + integer2;                  // <-
    printf( "Sum is %d\n", sum );               // <-
    printsep(); println();
}

// Problem 8
void examProblem8(void) {
    printf("Problem 8\n");
    printf("1: int x, y, z;");
    println();
    printf("2: printf(\"Enter three integers\\n\");");
    println();
    printf("3: scanf(\"%%d%%d%%d\", &x, &y, &z);");
    println();
    printf("4: int result = x * y * z;");
    println();
    printf("5: printf(\"The product is %%d\", result);");
    println();
}

// Problem 9
void examProblem9(void) {
    printf("Problem 9\n");
    printf("1: &number should be number.");
    println();
    printf("2: number2 should be &number2.");
    println();
    printf("3: %%value should be &value.");
    println();
    printf("4: sum should be on left of =.");
    println();
    printf("5: largest == number should be largest = number.");
    println();
}

// Problem 10
void examProblem10(void) {
    printf("Problem 10\n");
    printf("Program Output:\n");
    printsep();
    unsigned int x;
    for (x = 1; x <= 10; ++ x) {                        // <- program code
        if (x == 5) {                                   // <- (typo: x = = 5 changed to x == 5)
            break;                                      // <-
        }                                               // <-
        printf("%u ", x);                               // <-
    }                                                   // <-
    printf("\nBroke out of loop at x = = %u\n", x);     // <-
    printsep();
}

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

// Problem 12
void examProblem12(void) {
    printf("Problem 12\n");
    printf("1: data type, name of array (pointer to [0], and number of elements.");
    println();
    printf("2: this is okay because the size is implied in the definition.");
    println();
}

// Problem 13
void examProblem13(void) {
    printf("Problem 13\n");
    printf("1: American Standard (for) Information Interchange");
    println();
    char name[] = {'K', 'y', 'l', 'e', 0};
    printf("2: %x %x %x %x -> %s",
           name[0], name[1], name[2], name[3], name);
    println();
}

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
    printf("(user inputs %d)\n", x_val);    // <- scanf("%d", &x);
    x = x_val;                              // <-
    printf("(user inputs %d)\n", y_val);    // <- scanf("%d", &y);
    y = y_val;                              // <-
    if (x > y) {
        temp = x;
        x = y;
        y = temp;
    }
    printf("The values are \n");
    printf("x =%d\n" , x);
    printf("y =%d\n" , y);
//  return 0;
}

// Problem 15
void program15(int grades[]);
void examProblem15(void) {
    printf("Problem 15\n");
    int grades[] = {90, 95, 100, 100, 95, 90, -1};
    printf("Program Output:\n");
    printsep();
    program15(grades);
    printsep();
}
void program15(int grades[]) {
    unsigned int counter; // number of grades entered
    int grade; // grade value
    int total; // sum of grades
    float average; // number with decimal point for average
    // initialization phase
    total = 0; // initialize total
    counter = 0; // initialize loop counter
    // processing phase
    //get first grade from user
    printf("%s", "Enter grade, -1 to end: " );
    printf("(user inputs %d)\n", grades[0]);              // <- scanf("%d", &grade);
    grade = grades[0];                                    // <-
    // loop while sentinel value not yet read from user
    while (grade != -1) {
        total = total + grade; // add grade to total
        counter = counter + 1; // increment counter
        // get next grade from user
        printf("%s", "Enter grade, -1 to end: " );
        printf("(user inputs %d)\n", grades[counter]);    // <- scanf("%d", &grade);
        grade = grades[counter]; // read the next grade
    } // end while
    // termination phase
    // if user entered at least one grade
    if ( counter != 0) {
        // calculate average of all grades entered
        average = (float) total / (float) counter; // avoid truncation
        // display the average with two digits of precision
        printf("Class average is %0.2f\n", average);
    } // end if
    else { // if no grades were entered, output message
        puts("No grades were entered" );
    } // end else
}

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
    printf("(user inputs %c)\n", class_val);              // <- scanf("%c", &class);
    class = class_val;                                    // <-
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
//    return 0;
}

// Problem 17
void examProblem17(void) {
    printf("Problem 17\n");
    printf("Equivalent Expression: !((x < 5) || (y >= 7))");
    println();
}

// True or False Questions
void examTrueFalse(void) {
    printf("True or False Questions\n");
    int answers[] = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    for (int i = 0; i < 10; i++) {
        char *answer = answers[i] ? "true" : "false";
        printf("%d: %s.\n", i + 1, answer);
    }
}

// New Line Function
void println(void) { printf("\n"); }

// Separator Function
void printsep(void) {
    if (start) {
        start = 0;
        printf("start--------------\n");
    } else {
        start = 1;
        printf("----------------end\n");
    }
}

// Problem Selector Function
int problemSelector(int problem) {
    switch(problem) {
        case 0:
            examTrueFalse();
            break;
        case 1:
            examProblem1();
            break;
        case 2:
            examProblem2();
            break;
        case 3:
            examProblem3();
            break;
        case 4:
            examProblem4();
            break;
        case 5:
            examProblem5();
            break;
        case 6:
            examProblem6();
            break;
        case 7:
            examProblem7();
            break;
        case 8:
            examProblem8();
            break;
        case 9:
            examProblem9();
            break;
        case 10:
            examProblem10();
            break;
        case 11:
            examProblem11();
            break;
        case 12:
            examProblem12();
            break;
        case 13:
            examProblem13();
            break;
        case 14:
            examProblem14();
            break;
        case 15:
            examProblem15();
            break;
        case 16:
            examProblem16();
            break;
        case 17:
            examProblem17();
            break;
        default:
            return -1;
    }
    return 0;
}