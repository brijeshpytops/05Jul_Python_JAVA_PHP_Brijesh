#include<stdio.h>

int main(){
    
    int num1 = 1, num2 = 2;
    
    // (condition)?True:False;
    
    (num1 == num2)?printf("num1 is num2"):(num1 > num2)?printf("num1 is big"):printf("num2 is big");
    
    return 0;
}



#include<stdio.h>

int main(){
    
    int num1 = 4, num2 = 2, num3 = 3;
    
    // (condition)?True:False;
    
    (num1 > num2)?(num3>num1)?printf("num3 is big"):printf("num1 is big"):(num2>num3)?printf("num2 is big"):printf("num3 is big");
    
    return 0;
}