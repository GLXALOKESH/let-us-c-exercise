#include <stdio.h>
#include <math.h>
int main(){
int x,i;
float fraction, ans=0, res;
printf("Enter the value of x: \n");
scanf("%d", &x);
fraction = (float)(x-1)/x;
// printf("fraction:%f",fraction);
for(i=1 ; i<= 7; i++){
    if (i==1){
        res = fraction;
    // printf("res:%f", res);
    }
    else{
        res = (1.0/2) * pow(fraction,i);
        // printf("res:%f", res);
    }
    ans += res;
    // printf("ans:%f\n", ans);
}
printf("Here is your answer: %.2f\n", ans);
return(0);
}