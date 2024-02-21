#include <stdio.h>
int fibonacci(int );
int main(){
    int n = 10;
    int ret = 5;
    ret = fibonacci(n);
printf("%d", ret);
}
int fibonacci(int num ){
    int i=0 ;
    if(i=num){
        return 0;
    }
    else{
        i++;
        return (i+fibonacci(num));
    }
}