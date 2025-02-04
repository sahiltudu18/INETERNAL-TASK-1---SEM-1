//2.GCD of Two Numbers

#include<stdio.h>

int gcd(int a, int b){
    int gcd = 1;
    for(int i = 1; i <= a && i <= b; i++){
        if(a % i == 0 && b % i == 0)
        gcd = i;
    }
    return gcd;
}

int main(){
    int num1, num2;

    printf("enter two numbers : ");
    scanf("%d %d", &num1, &num2);

    printf("GCD of %d and %d is %d\n", num1, num2, gcd(num1, num2));

    return 0;
}
