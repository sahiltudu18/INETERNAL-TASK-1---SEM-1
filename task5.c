//5.Prime Factors of a Number 

#include<stdio.h>
#include<math.h>

void primefactors(int n){
    printf("prime factors of %d are: ", n);

    while(n % 2 == 0){
        printf("2");
        n /= 2;
    }

    for(int i = 3; i <= sqrt(n); i += 2){
        while(n % i == 0){
            printf("%d", i);
            n /= i;
        }
    }

    if(n > 2){
        printf("%d", n);
    }

    printf("\n");
}

int main(){
    
        int num;
        printf("enter a number : ");
        scanf("%d", &num);

        if(num <= 1){
            printf("No prime factors for numbers <= 1.\n");
        }else{
            primefactors(num);
        }
        return 0;
    }

