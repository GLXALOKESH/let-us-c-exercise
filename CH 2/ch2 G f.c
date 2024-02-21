/*Two numbers are input through the keyboard into two locations C and D. Write a program to interchange the contents of C and D
Alokesh Maitra 
10 11 2023*/
#include <stdio.h>
int main(){
    int c, d, i;
printf("Enter value of C : \n");
scanf("%d", &c);
printf("Enter value of D: \n");
scanf("%d", &d);
i = c;
c = d ;
printf("value of new C is : %d\n", c);
d = i;
printf("value of new D is : %d\n", d);
return(0);
}