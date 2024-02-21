/*Two numbers are entered through the keyboard. Write a program find the value of 
one number raised to the power of another */
#include <stdio.h>
int main(){
    int num1 , num2, num3;
    printf("enter the base number and the power value: ");
    scanf("%d %d", &num1 , &num2);
    for(int i=1; i<= num2 ; i++){
        num3 *= num1;
    }
    printf("Here is your answer: %d", num1 );
    return(0);
}