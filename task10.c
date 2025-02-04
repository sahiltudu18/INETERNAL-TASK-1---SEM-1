//3.ARRAY  
//Multi-dimensional array 
//1. largest number from any 3x3 matrix.

#include<stdio.h>

int main(){
    int matrix[3][3], i, j, max;

    printf("enter 9 elements for the 3*3 matrix : \n");
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            scanf("%d", &matrix[i][j]);
        }
    }

    max = matrix[0][0];

    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            if(matrix[i][j] > max){
                max = matrix[i][j];
            }
            
        }
    }

    printf("the largest element in the matrix is : %d\n", max);

    return 0;
}

