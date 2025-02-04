//1. 1 + 2 + 3 + ……. + n

#include <stdio.h>

int sumOfNaturalNumbers(int n) {
    return (n * (n + 1)) / 2;  
}

int main() {
    int n;

    
    printf("Enter a positive integer n: ");
    scanf("%d", &n);

    if (n < 1) {
        printf("Please enter a positive integer.\n");
    } else {
        printf("Sum of first %d natural numbers: %d\n", n, sumOfNaturalNumbers(n));
    }

    return 0;
}
