#include <stdio.h>
void interchange(int *, int *, int*);
int main(){
    int x, y, z;
printf("Enter the value of x , y , z\n");
scanf("%d %d %d", &x, &y, &z);
interchange(&x, &y, &z);
printf("%d %d %d\n", x,y,z);
return(0);
}
void interchange(int *a, int* b, int* c){
    int x=*a ,y=*b,z=*c;
    *a = z;
    *b = x;
    *c = y;
}