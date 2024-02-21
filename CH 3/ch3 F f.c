/*Given three points (x1, y1), (x2,y2) and (x3,y3)*/
#include <stdio.h>
int main(){
int x1, x2, x3 , y1, y2, y3;
printf("Enter the three x coordinates of your three points: \n");
scanf("%d %d %d", &x1, &x2, &x3);
printf("Enter the three y coordinte of your three points: \n");
scanf("%d %d %d", &y1, &y2, &y3);
if (((x1 == x2) && (x2 == x3) && (x1 == x3)) || ((y1 == y2) && ( y2== y3) && (y3 == y1)) || (y1/x1 == y2/x2 == y3/x3)){
    printf("points lies in an straight line\n");
}
else   {

    printf("Points are not in straingt line\n");
}
return(0);
}