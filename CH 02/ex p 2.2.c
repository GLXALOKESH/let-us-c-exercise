/*if a five digit number is input through the keyboard, write a programm to reverse the number*/
#include<stdio.h>
#include<conio.h>
int main (){
    int d1, d2, d3, d4, d5, n;
    long int rev;
    printf("Enter a 5 digit number (less than 32767): ");
    scanf("%d", &n);
    d1 = n % 10;
    n = n / 10;
    d2 = n % 10;
     n = n / 10;
    d3 = n % 10;
     n = n / 10;
    d4 = n % 10;
     n = n / 10;
    d5 = n % 10;
    rev = d1 * 10000 + d2 * 1000 + d3* 100+ d4 * 10 + d5 ;
    printf("Here is your reversed number: %ld\n", rev);
    return(0);
}
