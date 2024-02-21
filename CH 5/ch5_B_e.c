#include <stdio.h>
int main(){
    int num , reminder , octal=0, n=1;
    printf("Enter Your integer number: \n");
    int run = scanf("%d",&num);
    if(run){
        while(num){
        reminder = num %8;
        num /= 8;
        octal += reminder*n;
        n = n*10;
        printf("rem: %d num: %d octal: %d n:%d\n", reminder, num, octal, n);
        }
        printf("Here is the Octal of your number: %d",octal);
    }
    else{
        printf("please enter a valid integer!\n");
    }
    return(0);
}