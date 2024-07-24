// Documentation section
// Program to add two numbers

// Linking section
#include <stdio.h>

// Global declarations section
// float PI = 3.14

// Function declarations section
int add(int a, int b);

// Main function
int main() {
    // Local declaration section
    int a = 10;
    int b = 20;
    int c;

    // Function usage
    c = add(a, b);

    // Output results
    printf("Sum of %d and %d is %d\n", a, b, c);

    return 0;
}

// Sub-function declaration section
// You can define additional functions here if needed
int add(int a, int b) {
    int c = a + b;
    return c;
}