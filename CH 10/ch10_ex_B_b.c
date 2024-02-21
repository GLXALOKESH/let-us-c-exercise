#include <stdio.h>
 
 int sum(int );

 int main(){
   int num=1,ret;
   ret = sum(num);
   printf("Here Is The Result: %d\n", ret);

 }

 int sum(int num){
   if(num == 26){
      return(0);
   }
   else{
      return(num + sum(num+1));
   }
 }