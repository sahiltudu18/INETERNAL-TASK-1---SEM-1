//5. Transpose of a 3x3 matrix. 

#include <stdio.h>

int main() {
    int matrix[3][3], transpose[3][3];
    int i, j;

    
    printf("Enter 9 elements for the 3x3 matrix:\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            transpose[j][i] = matrix[i][j];
        }
    }

    
    printf("Transpose of the matrix:\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            printf("%d ", transpose[i][j]);
        }
        printf("\n");
    }

    return 0;
}
