#include <stdio.h>
#include <math.h>
//creating an structure for coordinate value
struct coord{
float x ,y;
};
//function for distence between two points
void dist(struct coord , struct coord, float * );
//function for area of triangle
void areafn(float , float , float ,float*);
//function to check if point lies inside the triangle
int liescheck(float, float , float , float , float,float, float);
//main function
int main(){
  struct coord A, B, C, P;
  //taking input from user for A , B , C
  printf("Enter the x and y coordinate of point A:\n>");
  scanf("%f %f", &A.x, &A.y);
  printf("Enter the x and y coordinate of point B:\n>");
  scanf("%f %f", &B.x, &B.y);
  printf("Enter the x and y coordinate of point C:\n>");
  scanf("%f %f", &C.x, &C.y);
  //declaring the distances 
  float AB, BC , CA;
  //calculating the distances
dist(A, B, &AB);
dist(B, C, &BC);
dist(C, A, &CA);
//calling the area
 float area;
 areafn(AB, BC , CA, &area);
//taking input of point P
printf("Enter the coordinate of point P\n>");
scanf("%f %f", &P.x, &P.y);
float pa , pb ,pc ;
dist(P,A,&pa);
dist(P,B,&pb);
dist(P,C,&pc);
int ret= liescheck(AB, BC, CA, pa, pb ,pc, area);
printf("return value: %f\n", ret);
return(0);
}
void dist(struct coord A , struct coord B, float* AB){
    *AB = sqrt(pow((A.x-B.x),2)+pow((A.y-B.y),2));

}
void areafn(float a, float b, float c, float* area){
  float s = (a+b+c)/2;
    *area = sqrt(s*(s-a)*(s-b)*(s-c));
}
int liescheck(float ab, float bc , float ca , float pa, float pb,float pc, float area_abc ){
  float a , b ,c;
  //area of APB
  areafn(ab , pa , pb , &a);
  // area of BPC
  areafn ( bc , pb ,pc , &b);
  // area of CPA
  areafn (ca , pa , pc, &c);
  // check if APB+BPC+CPA = ABC
  if (area_abc == a+b+c){
    return 1;
  }
  else{
    return 0;
  }

}