/*Temperature of a city in Ferhenhite degrees is input through the keyboard . write a program to convert this temperature into 
centrigrade degrees 
9/25/2023
alokesh maitra*/
#include <stdio.h>
int main () {
    float f, c ;
    printf("input your ferhenhite scale reading :");
    scanf("%f", &f);
    c = (f-32)* 5/9;
    printf("Here is your temprature value in degree celcious: %.2f", c);
    return 0;
}