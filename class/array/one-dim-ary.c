/*
What is array?

An array in C is a collection of elements of the same data type stored in contiguous memory locations

Arrays are used to store multiple values in a single variable, instead of declaring separate variables for each value.

Declaration and Initialization:

You declare an array by specifying the data type, the array name, and the size (number of elements).

data_type array_name[size];
data_type array_name[size] = {value1, value2, value3....valuen};

Accessing Elements:
Array elements are accessed using their index, starting from 0.

*/


#include <stdio.h>

int main() {
    float students[] = {
        34, 56, 78, 87, 36, 90, 88, 56, 90, 98, 78, 99, 83
    };
    
    // access single elements from the array
    // printf("%.2f", students[0]);
    
    // access all the elements from the array
    
    // find the length of the given array
    int len = sizeof(students)/sizeof(students[0]);
    // printf("%d", len);
    
    for(int index = 0; index < len; index++){
        printf("%.2f\n", students[index]);
    }

    return 0;
}