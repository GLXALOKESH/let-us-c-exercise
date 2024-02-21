#include <stdio.h>
int main(){
int hardness, carbon, strength , p1, p2, p3;
printf("Enter the Hardness of your steel: \n");
scanf("%d",&hardness);
printf("Enter the Carbon content of your steel: \n");
scanf("%d",&carbon);
printf("Enter the Tensile strength of your steel; \n");
scanf("%d", &strength);
if(hardness>50){
    p1 = 1;
}
else {
    p1 = 0;
}
if ( carbon < 0.7){
    p2 = 1;
}
else {
    p2 = 0;
}
if (strength > 5600){
    p3 = 1;
}
else 
{
    p3 = 0;
}
if(p1 == 1 && p2 == 1 && p3 == 1){
    printf("Grade: 10\n");
}
else if (p1 == 1 && p2 == 1){
    printf("Grade: 9\n");
}
else if (p2 == 1 && p3 == 1){
    printf("Grade: 8\n");
}
else if (p1 == 1 && p3 == 1){
    printf("Grade: 7\n");
}
else if (p1 == 1 || p2 == 1 || p3 == 1){
    printf("Grade: 6\n");
}
else {
    printf("Grade: 5\n");
}
return(0);
}