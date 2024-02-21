/*The distance between two citis( in kilometer) is input through the keyboard. Write a program to convert and print this distance
in meters, feet, inches and centimeters*/
#include <stdio.h>
int main(){
    float  cm, inc, feet, m;
    float km;
    printf("Input the distance value in kilometers: ");
    scanf("%f", &km);
    m = km/1000;
    cm = m / 100;
    inc  = cm / 2.54;
    feet = inc / 12;
    printf("\nDistance in meters is : %f", m);
    printf( "\nDistance in centimeters is : %f", cm);
    printf("\nDistacne in inches is : %f", inc);
    printf("\nDistance in feet is : %f ", feet);
    return 0;

}
