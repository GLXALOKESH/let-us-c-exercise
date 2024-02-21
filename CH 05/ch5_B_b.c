#include <stdio.h>
int qubicNumber(int);
int main(){
    int n , sum= 0, num;
    for(int i = 1; i<=500; i++ ){
        num = i;
        for(int j = 0; j <4; j++){
            n = num % 10;
            num /= 10;
            sum += qubicNumber(n);
            // printf("i: %d n: %d sum: %d\n", i, n, sum);
        }
        if(i == sum){
            printf("%d is a Armstrong number\n", i);
        }
        sum = 0;
    }
    return(0);

}
int qubicNumber(int n){
    int ret;
    ret = n*n*n;
    return (ret);
}