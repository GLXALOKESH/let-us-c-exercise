#include <stdio.h>
int main(){
int num , x;
printf("Enter the number you want to check: \n>");
scanf("%d", &num);
x = num % 2;
if (x == 0)
    printf("The number is even\n>");
else 
    printf("The number is odd\n>");
return(0);
}