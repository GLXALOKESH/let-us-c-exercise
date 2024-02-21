/*Write a program to check whether a triangle is valid or not, if three angles of the triangle are entered through the keyboard. 
Alokesh Maitra*/
#include <stdio.h>
int main(){
    int x, y, z, sum;
printf("Enter the three angles of the triangle : \n");
scanf("%d %d %d", &x, &y, &z);
sum = x + y + z;
if (sum == 180)
{
    printf("The triangle is valid\n");

}
else {
    printf("The triangle is not valid\n");
}

return(0);
}