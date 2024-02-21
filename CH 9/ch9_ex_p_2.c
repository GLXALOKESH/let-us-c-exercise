#include <stdio.h>
#include <math.h>
void calculation(int,float,double *,double *, int );
int main(){
    float a;
    int b , number;
    double  expo, factorial;
    printf("Enter the value of a and b\n");
    scanf("%f %d", &a, &b);
    printf("Enter the value of factorial:\n");
    scanf("%d",&number);
    calculation(b, a, &expo, &factorial,number);                                                      
    printf("value of %d raised to the power %f is : %lf\n value of factorial: %lf", b, a, expo , factorial);
return(0);
}
//calculation part of the function
void calculation(int b, float a,double *expo, double *factorial, int number){
    double fact=1;
    *expo = pow(a, b);
    for (int i = 1; i <= number; i++)
    {
        fact *= i;
    }
    
    *factorial = fact; 
}
