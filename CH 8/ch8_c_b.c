#include <stdio.h>
//declaring the function prototype
void primeFactor(int);
int prime(int);
int main(){
    int number;
//taking the input from the user
printf("Enter your number here: \n>");
scanf("%d",&number);
printf("Here are the prime factors: \n");
primeFactor(number);
return(0);
}
//defining the function prototype
void primeFactor(int num){
    int flag=1,i;
    while (num!=1){
        flag =1;
    i=2;
    do
    {
        if (prime(i)){
        if (num % i == 0){
            printf("%d", i);
            num = num / i;
            flag =0;
        }
    }

        i++;
    } while (flag);
     printf("\n");
     }
}
int prime(int itr){
    for (int i=2;i<itr;i++){
        if (itr%i==0){
            return 0;
        }
    }
    return 1;
}