/*

if (condition-1){
    if(condition-2){
        code of block
    }
}


if (condition-1){
    if(cond n-2){
        code of block
    }else{
        code of block
    }
}else{
        code of block
}
*/

#include <stdio.h>

int main() {
    int age;
    float weight;
    
    printf("Enter your age: ");
    scanf("%d", &age);
    
    if (age >= 18){
        printf("Enter your weight: ");
        scanf("%f", &weight);
        if (weight >= 50){
            printf("You can donate");
        }else{
            printf("You can not donate");
        }
    }else{
        printf("You can not donate");
    }

    return 0;
}