/*If a five digit number is input through the keyboard, write a programm to calculate the sum of its digits.
Alokesh Maitra
10 10 2023 */

#include <stdio.h>
int main(){
long int number ;
int sum, num1, num2, num3 , num4 ,num5;
printf("Enter your 5 digit number : ");
scanf("%d", &number);
num5 = number % 10;
number = number/10;
num4 = number % 10;
number = number / 10;
num3 = number % 10;
number = number / 10 ;
num2 = number % 10;
number = number / 10;
num1 = number % 10;
sum = num1 + num2 + num3 + num4 + num5;
printf("Here is your sum of numbers: %d", sum);
return(0);
}