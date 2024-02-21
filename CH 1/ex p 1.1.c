/*Ramesh's basic salary is input though the keyboard. His dareness allowance is 40% of basic salary , and house rent allowence is 20% 
of basic salary. Write a program to calculate his gross salary 
9/25/2023
Alokesh Maitra*/
#include <stdio.h>
int main () {
    int bs , da, hra, gs ;
    printf("input your basic salary : ");
    scanf("%d", &bs);
    da = 0.4*bs;
    hra = 0.2*bs;
    gs= bs + da + hra ;
    printf("\nYour basic salary is %d", bs);
    printf("\nYour dareness allowance is %d", da);
    printf("\nYour house rent allowence is %d", hra);
    printf("\nYour gross salary is %d", gs);
    return 0; 
}