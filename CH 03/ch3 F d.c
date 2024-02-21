/*Write a program to find the absolute value of the number entered through the keyboard.*/
#include <stdio.h>
int main(){
int number ;
printf("Enter Your number: ");
scanf("%d", &number);
if (number < 0){
    number = (-1) * number;
}
printf("Absolute value of the number entered is : %d", number);
return(0);
}