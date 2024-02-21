/*Given the coordinates (x,y) of center of a circle and it's radius , write a program that will determine whether a point lies inside 
the circle , on the circle or outside the circle. */
#include <stdio.h>
#include<math.h>
int main(){
int x_center , y_center , x_point , y_point, radius , distance ;
printf("Enter the x coordinate and y coordinate of the center of the circle: \n");
scanf("%d %d", &x_center, &y_center);
printf("Enter the radius of your circle: \n");
scanf("%d", &radius);
printf("Enter the x coordinate and y coordinate of the point you want to check: \n");
scanf("%d %d", &x_point,&y_point );
distance = sqrt(pow(x_point-x_center, 2) + pow(y_point-y_center, 2));
if (radius > distance ) {
    printf("point is inside the circle \n");
}
else if (radius < distance) {
    printf("Point is outside the circle\n");
}
else if (radius == distance){
    printf("The point is on the circle  \n");

}
else {
    printf("ERROR");
}
return(0);
}