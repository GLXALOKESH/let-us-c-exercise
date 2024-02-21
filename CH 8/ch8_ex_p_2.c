#include <stdio.h>
//declaring the funtion prototype
int power(int , int );
int main(){
    int a ,b ,ret;
    //Taking the value of a and b from the user 
    printf("Enter the value of a and b \n>");
    scanf("%d %d",&a, &b);
    //taking the function return value
    ret = power(a, b);
    printf("Here is the output: %d",ret);
}
//writing the function definition 
int power(int a , int b){
    int i, ret=1;
    for (i=1; i<=b;i++){
        ret *= a;
    }
    return ret;
}