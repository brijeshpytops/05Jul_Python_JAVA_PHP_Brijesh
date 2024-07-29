/*
if else-if ladder:

suntax:

if (condition1){
    # code block 1
}
else if (condition2){
    # code block 2
}...
else{
    # code of block [else]
}


*/

#include <stdio.h>

int main() {
    int score = -33;
    if (score >= 0 && score <= 100){
        if (score >= 80){
            printf("Class A");
        }else if (score >= 60){
            printf("Class B");
        }else if(score >= 40){
            printf("Class C");
        }else{
            printf("Sorry, You are field. better luck for next year.");
        }
    }else{
        printf("Invalid score.\nPlease enter a valid score between 0 to 100");
    }
    return 0;
}