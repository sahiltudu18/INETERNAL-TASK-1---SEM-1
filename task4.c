//4.Prime Number Checker

#include<stdio.h>
#include<math.h>

int main(){
    int n, isprime = 1;
    printf("enter number : ");
    scanf("%d", &n);

    if(n < 2){
        printf("%d is not aprime number.\n", n);
        return 0;
    }

    for (int i = 2; i <= sqrt(n); i++){
        if(n % i == 0){
            isprime = 0;
            break;
        }
    }

    if(isprime)
    printf("%d is aprime number.\n", n);

    else
      printf("%d is not a prime number. \n",n);

      return 0;
}