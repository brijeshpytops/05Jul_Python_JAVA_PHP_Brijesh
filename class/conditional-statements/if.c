/*
syntax:

if (condition){
    // code to be executed if condition is true
}
*/

#include <stdio.h>

int main() {
    int bal = 10000;
    int withdrow = 3000;
    
    if (withdrow <= bal){
        printf("Total remaining amount is: %d\n", bal-withdrow);
        printf("Withdrow successful.");
    }

    return 0;
}