#include <stdio.h>
#include<math.h>
#define NUM 20
int cubicNumber(int );
int printedNumber[NUM*NUM*NUM*NUM]={0};
int main(){
unsigned int  i , j , k , l , a, b, c, d, sum;
for(i=1;i<=NUM;i++){
    for(j=1;j<=NUM;j++){
        for(k=1;k<=NUM;k++){
            for(l=1;l<=NUM;l++){
                a=cubicNumber(i);
                b=cubicNumber(j);
                c=cubicNumber(k);
                d=cubicNumber(l);
                sum = a+b;
                if( !printedNumber[sum]){
                    printf("%d is a similar like Ramanujan Number\n", sum);
                    printedNumber[sum]=1;
                }
            }
        }
    }
}
return(0);
}
int cubicNumber(int a){
    int b ;
    b = a *a *a ;
    return b;
}
