#include "config.h"

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
    printf("(user inputs %d)\n", grades[0]);
    grade = grades[0];
    // loop while sentinel value not yet read from user
    while (grade != -1) {
        total = total + grade; // add grade to total
        counter = counter + 1; // increment counter
        // get next grade from user
        printf("%s", "Enter grade, -1 to end: " );
        printf("(user inputs %d)\n", grades[counter]);
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