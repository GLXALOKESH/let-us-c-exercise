#include <stdio.h>
#include <math.h>
int main(){
    float weight, height, BMI;
printf("Enter your weight(in kilograms): \n");
scanf("%f", &weight);
printf("Enter your height(in meter): \n");
scanf("%f", &height);
BMI = weight / pow(height, 2);
if(BMI<=15){
    printf("Stervation\n");
}
else if (BMI >= 15.1 && BMI < 17.5){
    printf("Anorexic\n");
}
else if (BMI >= 17.6 && BMI < 18.5){
    printf("Underweight\n");
}
else if (BMI >= 18.6 && BMI <= 24.9 ){
    printf("Ideal\n");
}
else if (BMI >= 25 && BMI <= 25.9){
    printf("overweight\n");
}
else if (BMI >= 30 && BMI <= 30.9){
    printf("Obese\n");
}
else {
    printf("Morbidly Obese");
}
return(0);
}