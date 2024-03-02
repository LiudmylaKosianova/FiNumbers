#include <stdio.h>

int fibSum (int rabbit);
int fibNumber (int n);

// int main(){
    
//     int number;
//     printf("Welcome!\n");
//     printf("Please, enter a number:");
//     scanf("%d", &number);
//     printf("\nThe sum of the first %d Fibonacci numbers is: %d\n",number, fibSum(number));
     
    
//     return 0;
// }

int fibNumber(int n){ 
    if(n==0){
        return 0;
    }else if(n==1){
        return 1;
    }
    else{
        return fibNumber(n-1) + fibNumber(n-2);
    }
} 

int fibSum (int rabbit){    
    
    int sum = 0;
    for(int i = 0; i<rabbit; i++){
         
        sum += fibNumber(i);
         
    }
    return sum;
}