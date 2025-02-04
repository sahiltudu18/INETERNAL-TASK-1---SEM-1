//8.Palindrome Number Checker

#include<stdio.h>

int isPalindrome(int num){
    int originalNum = num, reversedNum = 0, remainder;

    while(num > 0){
        remainder = num % 10;
        reversedNum = reversedNum * 10 + remainder;
        num /= 10;
    }

    return(originalNum == reversedNum);
}

int main(){
    int num;

    printf("enter a number : ");
    scanf("%d", &num);

    if(isPalindrome(num)){
        printf("%d is a Palindrome number.\n", num);
    }else{
        printf("%d is not a Palindrome number.\n");
    }

    return 0;
}

