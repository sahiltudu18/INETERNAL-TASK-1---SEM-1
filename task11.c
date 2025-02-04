//2. both the diagonal sum of 3x3 matrix. 

#include <stdio.h>

int main() {
    int matrix[3][3], i, j;
    int mainDiagonalSum = 0, secondaryDiagonalSum = 0;

    
    printf("Enter 9 elements for the 3x3 matrix:\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    
    for(i = 0; i < 3; i++) {
        mainDiagonalSum += matrix[i][i];           
        secondaryDiagonalSum += matrix[i][2 - i];  
    }

    
    printf("Sum of main diagonal: %d\n", mainDiagonalSum);
    printf("Sum of secondary diagonal: %d\n", secondaryDiagonalSum);

    return 0;
}
