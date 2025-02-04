//7.Fibonacci Sequence Generator

#include<stdio.h>

void generateFibonacci(int n){
    int first = 0, second = 1, next;

    printf("Fibonacci Sequence up to %d terms :\n", n);

    for(int i = 0; i < n; i++){
        printf("%d", first);
        next = first + second;
        first = second;
        second = next;
    }
    printf("\n");
}

int main(){
    int n;
    printf("enter the number of terms : ");
    scanf("%d",&n);

    if(n<=0){
        printf("please enter a positive integer.\n");
    }else{
        generateFibonacci(n);
    }

    return 0;
}

