/*Write a program to find the factorial value of any
 number entered through the keyboard*/
 #include <stdio.h>
 int main(){
 int num , fact = 1 ;
 printf("Enter the factorial value: \n");
 scanf("%d", &num);
 for (int i = 1; i <= num; i++){
    fact *= i;
 }
 printf("Here is the factorial value : %d ", fact);
 return (0);
 }