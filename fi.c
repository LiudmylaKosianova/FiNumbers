#include <stdio.h>

int fib (int rabbit);
int fibN (int n);

int main(){
    
    int number;
    printf("Welcome!\n");
    printf("Please, enter a number:");
    scanf("%d", &number);
    printf("\nThe sum of the first %d Fibonacci numbers is: %d\n",number, fib(number));
     
    
    return 0;
}

int fibN(int n){ 
    if(n==0){
        return 0;
    }else if(n==1){
        return 1;
    }
    else{
        return fibN(n-1) + fibN(n-2);
    }
} 

int fib (int rabbit){    
    
    int sum = 0;
    for(int i = 0; i<rabbit; i++){
         
        sum += fibN(i);
         
    }
    return sum;
}