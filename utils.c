#include "config.h"
extern unsigned char start;

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