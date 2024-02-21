#include <stdio.h>
int main(){
int large , s1, s2, s3, sum ;
printf("Enter the values of three sides of your triangle: \n");
scanf("%d %d %d", &s1, &s2, &s3);
if((s1 > s2) && (s1 > s3)){
    large = s1;
    sum = s2+s3;
}
else if ((s2>s1) && (s2>s3)){
    large = s2;
    sum = s1 + s3;
}
else if ((s3>s1) && (s3>s2)){
    large = s3;
    sum = s1+s2;
}
else if ((s1 == s2) && (s2 == s3)){
    large = s1;
    sum = s2+ s3;
}
else {
    printf("invalid input\n");
}
if (large < sum){
    printf("Triangle is valid\n");
}
else{
    printf("Triangle is not valid\n");
}
return(0);
}