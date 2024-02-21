#include <stdio.h>
int main(){
int pop=100000, rate=10;
for (int i=1; i<=10; i++){
pop = pop + pop* rate/100;
printf("year %d : population:%d\n", i, pop);
}
return(0);
}