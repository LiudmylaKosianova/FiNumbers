#include <stdio.h>

int fib (int rabbit);

int main(){

    printf("%d\n", fib(1));
    
    return 0;
}

int fib (int rabbit){
    int sum =0;

    int fibN(int n){ 

        if(n ==0 || n==1){
            return 1;
        }else{
            return fibN(n-1) + fibN(n-2);
        }
    }    

    return sum;
}