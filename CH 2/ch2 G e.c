/*If value of an angle is input through the keyboard, write a programm to write all it's Trignometric ratios
Alokesh Maitra
10 11 2023*/
#include <stdio.h>
#include <math.h>
int main(){
float val ;
printf("Enter Value of the angel of your triangle: \n");
scanf("%f", &val);
printf("Here is the value of sine of your tringle:%f \n ",sin(val) );
printf("Here is the value of cos of your tringle:%f \n ", cos(val));
printf("Here is the value of tan of your tringle:%f \n ",tan(val) );
printf("Here is the value of cot of your tringle:%f \n ", 1/tan(val));
printf("Here is the value of cosec of your tringle:%f \n ", 1 / sin(val));
printf("Here is the value of sec of your tringle:%f \n ", 1 / cos(val));
return(0);
}