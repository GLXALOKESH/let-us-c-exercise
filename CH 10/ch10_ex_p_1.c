#include <stdio.h>
int Sumofdigit(int );
int main(){
    int number;
    printf("Enter your five digit number here: \n>");
    scanf("%d", &number);
    int ret =Sumofdigit(number);
    printf("Here is the sum: %d\n", ret);
}
int Sumofdigit(int num){
    int digit;
    if(num == 0){
        return 0;
    }
    else{
        digit = num %10;
        num/= 10;
        return (digit + Sumofdigit(num)) ;
    }
    
}