/*A five-digit number is entered through the keyboard. Wrire a program to obtrain the reversed nuber and to determine whether the 
orginal and reversed numbers are equal or not.*/
#include <stdio.h>
int main(){
int number , reverse = 0, remainder= 0 , number_copy;
printf("Enter the number you want to reverse: \n");
scanf("%d", &number);
number_copy = number;
while (number != 0)
{
    remainder = number % 10;
    reverse = reverse * 10 + remainder;
    number /= 10;
}
printf("The reversed number is : %d\n", reverse);
if (number_copy == reverse )
{
    printf("the orginal and reversed number is same\n");
}
else{
    printf("The original ans reversed number is not same\n");
}

return(0);
}