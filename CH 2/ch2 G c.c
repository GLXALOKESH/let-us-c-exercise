/* Write a program to recive values of latitude (L1,L2) and longitude (G1, G2), in degrees, of two places on the earth and output the distance (D)
between them in nautical miles.
Alokesh Maitra
10 10 2023*/
#include <stdio.h>
#include <math.h>
int main(){
    int L1, L2, G1, G2, D;
printf("Enter latitude and longtitude of 1st place: \n");
scanf("%d %d", &L1 , &G1);
printf("Enter latitude and longtitude of 2nd place: \n");
scanf("%d %d", &L2, G2);
D = 3963 * acos(sin(L1) * sin(L2) + cos(L1) * cos(L2) * cos(G2-G1));
printf("Distance between them in nauticla miles is : %d", D);
return(0);
}