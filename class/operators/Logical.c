// Logical Operator
#include <stdio.h>

void main() {
   int c1 = 1;
   int c2 = 0;
   int c3 = c1 < c2;
   int c4 = c2 < c1;
   int c5 = 34 < 50;
   int res;
   
//   res = c1 && c2;
    // res = c1 || c2;
    // res = c1 && c2 || c3 && c4 || c5;
    res = !c1;
   printf("res = %d", res);
   
   
   
//   A B C &&  ||
//   T T T T   T
//   F T T F   T
//   T F T F   T
//   T T F F   T
//   F F F F   F

    // A !
    // T F
    // F T
    
    
}

