#include <stdio.h>
int main(){
    int small=0, big=0, num, range ,i, flag;
    while(flag){
        printf("Enter your number (enter a non numarical character to stop): \n");
        flag = scanf("%d", &num);
        if(flag){
        if(small == 0 && big==0){
            small = num;
            big = num;
        }
        if (num < small){
            small = num;
        }
        if (num > big){
            big = num;
        }
        }
    }
    range = big - small;
    printf("Range is : %d", range);
    return(0);
}