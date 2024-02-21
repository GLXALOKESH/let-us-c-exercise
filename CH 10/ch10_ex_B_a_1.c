#include <stdio.h>

void binary(int);

int main()
{
   int num;
   printf("Enter the positive integer\n >");
   scanf("%d", &num);
   binary(num);
   return (0);
}

void binary(int num)
{
   int rem ;
   long long binary=0 , multi=1;

   do
   {
      rem = num % 2;
      num /= 2;
      binary += rem * multi;
      multi*=10;
   } while (num != 0);
   
      printf("%lld", binary);
}