/*Write a program to recive certesian co-ordinates (x , y) of a point and convert them into polar co-ordinates(r , fi)*/
#include <stdio.h>
#include <math.h>
int main(){
float cerx , cery, pr,pfi;
printf("Give certesian x and y coordinates respectively: \n");
scanf("%f %f", &cerx, &cery);
pr = sqrt((cerx*cerx)+(cery*cery));
pfi = atan(cery / cerx);
printf("Polar coordinates is (%f, %f)\n", pr, pfi);
return(0);
}