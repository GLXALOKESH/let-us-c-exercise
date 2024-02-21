/*Wind chill factor is the felt air temperature on exposed skin due to wind.....knpg37
Alokesh Maitra
10 11 2023*/
#include <stdio.h>
#include <math.h>
int main(){
float t, v, wcf;
printf("Enter wind temperature : ");
scanf("%f", &t);
printf("Enter wind velocity: ");
scanf("%f", &v);
wcf = 35.74  + 0.6215 * t + (0.4275 * t - 35.75) * pow(v , 0.16);
printf("Wind chill factor is: %f", wcf);
return(0);
}