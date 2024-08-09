// int matrix[3][3] = {
//     {1, 2, 3},
//     {4, 5, 6},
//     {7, 8, 9}
// }

#include <stdio.h>

int main() {
    int matrix1[2][3] = {
        {1,2,3},
        {4,5,6}
    };
    int matrix2[2][3] = {
        {11,22,33},
        {44,55,66}
    };
    
    int row_len = sizeof(matrix1)/sizeof(matrix1[0]);
    int col_len = sizeof(matrix1[0])/sizeof(matrix1[0][0]);
    
    // printf("Row : %d, Col : %d", row, col);
    
    printf("Matrix-1:\n");
    for(int row = 0; row < row_len; row++){
        for(int col = 0; col < col_len; col++){
            printf("%d ", matrix1[row][col]);
        }
        printf("\n");
    }
    printf("Matrix-2:\n");
    for(int row = 0; row < row_len; row++){
        for(int col = 0; col < col_len; col++){
            printf("%d ", matrix2[row][col]);
        }
        printf("\n");
    }
    
    printf("Matrix-1 + Matrix-2:\n");
    for(int row = 0; row < row_len; row++){
        for(int col = 0; col < col_len; col++){
            printf("%d ",matrix1[row][col] + matrix2[row][col]);
        }
        printf("\n");
    }
    printf("Matrix-1 * Matrix-2:\n");
    for(int row = 0; row < row_len; row++){
        for(int col = 0; col < col_len; col++){
            printf("%d ",matrix1[row][col] * matrix2[row][col]);
        }
        printf("\n");
    }
    
    
    return 0;
}


// 1,2 3
// 4,5,6

// 1,2
// 3,4
// 5,6