#include <stdio.h>
int factorial(int);

int main(){
    int num;
printf("Enter your number: \n>");
scanf("%d", &num);
printf("factorial value: %d",factorial(num));
return 0;
}

int factorial(int num){
    int i, ret=1;
    for(i=1;i<=num;i++){
        ret *= i;
    }
    return ret;
}