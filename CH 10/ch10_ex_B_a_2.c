#include <stdio.h>
int binary(int );
 
 int main(){
    int  num;
    printf("Enter the positive integer\n >");
    scanf("%d", &num);
    long long ret = binary(num);
    printf("binary =%lld\n", ret);
    return(0);
 }
 
 int binary(int num){
   if ( num==0){
      return 0;
   }
   else{
      return(binary(num/2)*10 + (num%2));
   }

 }