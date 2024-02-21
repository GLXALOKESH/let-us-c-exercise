/*Given a point (x,y), write a program to find out if it lies on X-axis , Y-axis or origin*/
#include <stdio.h>
int main(){
int x_coord , y_coord;
printf("Enter the x coordinate and the Y coordinate of your point: \n");
scanf("%d %d", &x_coord, &y_coord);
if (x_coord == 0 && y_coord == 0){
    printf("The point lies on origine\n");
}
else if (x_coord == 0){
    printf("The point lies on Y-axis\n");
}
else if (y_coord == 0){
    printf("The point lies on X-axis\n");
}
else {
    printf("The point doesn't lies on either x or y axis nor in the origine\n");
}
return(0);
}