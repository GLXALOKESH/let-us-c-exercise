#include <stdio.h>
#include <math.h>
int main(){
    int degree, ret;
    printf("Enter the value of your angle: \n");
    scanf("%d", &degree);
    ret = pow(sin(degree),2) + pow(cos(degree), 2);
    if(ret == 1){
        printf("Equal to 1\n");
    }
    else {
        printf("Not equal to 1\n");
    }
return(0);
}