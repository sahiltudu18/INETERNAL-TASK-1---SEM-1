//3.LCM of Two Numbers

#include<stdio.h>


   int lcm(int a, int b){
    int max = (a > b ) ? a : b;

    while(1){
        if(max % a == 0 && max % b == 0){
            return max;
        }
        max++;
    }
   }

   int main(){
    int num1, num2;

    printf("enter two numbers : ");
    scanf("%d %d", &num1, &num2);

    printf("lcm of %d and %d is %d\n", num1, num2, lcm(num1, num2));

    return 0;
   }