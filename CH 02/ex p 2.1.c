/*If lengths of three sides of a triangle are input through the keyboard, write a programm to find the area of triangle */
#include <stdio.h>
#include <math.h>
int main (){
    float s1, s2, s3; 
    float s, area ;
    printf("Input length of three sides of your triangle: ");
    scanf("%f %f %f", &s1 ,&s2, &s3);
    s = (s1+s2+s3)/2;
    area = (s * (s-s1)*(s-s2)*(s-s3));
    printf("Area of triangel is : %.2f", area);
    return (0);
}