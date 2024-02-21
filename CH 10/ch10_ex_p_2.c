#include <stdio.h>
int PrimeFactors(int , int);
int main(){
    int number;
    printf("Enter your number here:\n>");
    scanf("%d", &number);
    PrimeFactors(number, 2);
    return 0;
}
int PrimeFactors(int num, int i){
    
    if (num >= i ){
        if(num%i == 0){
            printf("%d ", i);
            num = num/i;
            PrimeFactors(num , i);
        }
        else{
            i++;
            PrimeFactors(num, i);
        }
        
    }
}
