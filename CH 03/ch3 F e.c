/*Given the length and breadth of a rectangle, write a program to find wheather the area of the rectangle is greater than its perimeter.
Alokesh Maitra
10 16 2023*/
#include <stdio.h>
int main(){
int length , breadth , area , perimeter;
printf("Enter the length of the rectangle: \n");
scanf("%d", &length);
printf("Enter the breadth of the rectangle: \n");
scanf("%d", &breadth);
area = length * breadth;
perimeter = 2* (length + breadth);
if (area > perimeter ){
    printf("Area of the rectangle is greater than perimeter\n");
}
else if (perimeter > area){
printf("Perimater of the rectangle is greater than area \n");
}
else {
    printf("area and perimeter of the rectangle is same\n");
}

return(0);
}