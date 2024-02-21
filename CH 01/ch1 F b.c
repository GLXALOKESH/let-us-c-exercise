/*The length and breadth of a rectangle and radius of a circle are input through the keyboard. Write a program to calculate the area
and perimeter of the rectangle, and the area and circumference of the circle */
#include <stdio.h>
int main () {
    int l , b , r, ra , pe, ca, cir ;
    #define PI 3.14
    printf("\nInput length of your rectangle: ");
    scanf("%d", &l);
    printf("\ninput breadth of your rectangle: ");
    scanf("%d", &b);
    printf("\ninput radius of circle : ");
    scanf("%d", &r);
    ra = l*b;
    pe = 2*(l+b);
    ca =  PI * r * r ;
    cir = 2 * PI * r ;
    printf ("\n area of ractangle is : %d \n perimeter of ractangle is : %d \n area of circle is : %d \n circumfarence of circle is : %d ", ra , pe , ca , cir);
    return 0;

}