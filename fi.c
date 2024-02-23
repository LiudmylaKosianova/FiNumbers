#include <stdio.h>

int fib (int rabbit);
int fibN (int n);

int main(){

    printf("\nSum is: %d\n", fib(5));
    
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