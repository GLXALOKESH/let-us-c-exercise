#include <stdio.h>
int factorial(int );
int prime(int );
void Odd_even(int );
int main(){
int input , num;
do {
printf("1.Factorial of a number\n2.Prime or not\n3.Odd or even\n4. exit\nEnter your choice\n");
scanf("%d", &input);
switch(input){
    case 1:
    printf("Enter your Number: \n");
    scanf("%d", &num);
    int p =factorial(num);
    printf("Here is the factorial value: %d\n", p);
    break;
    case 2:
    printf("Enter your number here: \n");
    scanf("%d", &num);
        prime(num);
    break;
    case 3:
    printf("Enter your number here: \n");
    scanf("%d", &num);
    Odd_even(num);
    break;
    case 4:
    input = 4;
    break;
    default:
    printf("Please choose a valid option\n");


}
}while(input != 4);
return(0);
}

int factorial(int a){
    long long fact=1;
    for (int i=1;i<=a;i++ ){
        fact= fact*i;
    }
    return fact;
}
int prime(int a){
    int flag=1;
    if (a==1){
        printf("1 is a natural number\n");
        return 1;
    }

    for (int i=2; i<a; i++){
        if (a % i ==0){
            flag = 0;
        }
    }
    if(flag ==1){
        printf("This is a prinme number\n");
    }
    else {
        printf("This ia not a prime number\n");
    }

}
void Odd_even(int a){
    if (a%2==0){
        printf("This is a Even number\n");
    }
    else {
        printf("This is a Odd number\n");
    }


}