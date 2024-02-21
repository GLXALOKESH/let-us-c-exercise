#include <stdio.h>
#include<math.h>
int main(){
for (int i=1; i<2;i++){
    int p, n, q ;
    float r ,a=0;
    printf("Enter the principal amount: \n");
    scanf("%d", &p);
    printf("Enter the annual rate of interest: \n");
    scanf("%f", &r);
    printf("Enter the number of years: \n");
    scanf("%d",&n);
    printf("Enter the time of compound every year: \n");
    scanf("%d", &q);
    a = p * pow((1+r/q),n*q);
    printf("Here is your result: %f",a);

}
return(0);
}