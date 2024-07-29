/*

if(condition){
    // code of block execute if condition is true
}else{
    // code of block execute if condition is false
}

*/

#include <stdio.h>

int main() {
    int bal = 10000;
    int withdrow = 13000;
    
    if (withdrow <= bal){
        printf("Total remaining amount is: %d\n", bal-withdrow);
        printf("Withdrow successful.");
    }else{
        printf("Insufficent bal.");
    }

    return 0;
}