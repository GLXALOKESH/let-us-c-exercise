#include <stdio.h>
int main(){
float R, G, B, white , cyan , magenta, yellow, black, max;
printf("Enter the value of RGB: \n");
scanf("%f %f %f", &R, &G, &B);
R/=255;
G/=255;
B/=255;
if((R>G) && (R > B)){
    max = R;
}
else if ((G>R) && (G>B)){
    max = G;
}
else if ((B>R) && (B>G)){
    max = B;
}
else {
    max = R;
}
white = max;
// printf("%f\n",white);
cyan = (white - R)/white;
magenta = (white - G)/white;
yellow = (white - B)/white;
black = 1-white;
printf("CMYK value is : %.3f %.3f %.3f %.3f\n", cyan , magenta, yellow,black);
return(0);
}