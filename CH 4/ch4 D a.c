#include <stdio.h>
int main(){
int s1, s2, s3;
printf("Enter the three sides of your triangle: \n");
scanf("%d %d %d", &s1,&s2,&s3);
if((s1==s2) && (s2==s3)){
    printf("This is an equilateral Triangle\n");

}
else if ((s1==s2) || (s2 == s3) || (s1 == s3)){
    printf("This is an isosceles Triangle \n");
}
else{
    printf("This is an scalene Triangle \n");
}
return(0);
}