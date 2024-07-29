/*
syntax:

switch (exp.){
    case value1:
        block of code 
        break;
    case value2:
        block of code 
        break;
    case value3:
        block of code 
        break;
    .
    .
    .
    default:
        code of block
}

*/


#include <stdio.h>

int main() {
    // 0 - monday, ....,6 - sunday
    int day = 7;
    switch (day){
        case 0:
            printf("Today is Mon");
            break;
        case 1:
            printf("Today is Tue");
            break;
        case 2:
            printf("Today is Wed");
            break;
        case 3:
            printf("Today is Thu");
            break;
        case 4:
            printf("Today is Fri");
            break;
        case 5:
            printf("Today is Sat");
            break;
        case 6:
            printf("Today is Sun");
            break;
        case 7:
        case 8:
            printf("New days added");
            break;
        default:
            printf("Invalid day");
    }
    return 0;
}