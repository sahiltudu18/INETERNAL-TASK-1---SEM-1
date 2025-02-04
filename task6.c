//6.Armstrong Number Checker

#include<stdio.h>
#include<math.h>

int isArmstrong(int num){
    int originalNum = num, sum = 0, digits = 0, remainder;

    while(originalNum != num){
        originalNum /= 10;
        digits++;
    }

    originalNum = num;

    while(originalNum != 0){
        remainder = originalNum % 10;
        sum += pow(remainder, digits);
        originalNum /= 10;
    }

    return(sum == num);
}

int main(){
    int num;

    printf("enter a number : ");
    scanf("%d", &num);

    if(isArmstrong(num))
    printf("%d is  an Armstrong number.\n", num);
    else
    printf("%d is not an Armstrong number.\n", num);

    return 0;
}

