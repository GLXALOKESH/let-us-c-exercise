#include <stdio.h>
void converter(int, float *, float *, float *);
int main()
{
    float kg, g, pound, tons;
    printf("Enter the value in kg: \n>");
    scanf("%f", &kg);
    converter(kg, &g, &pound, &tons);
    printf("the value in,\n kg = %f\n Grams =%f\nPounds = %f\n Tons = %f\n ", kg, g, pound, tons);
    return (0);
}
void converter(int kg, float *g, float *pound, float *tons)
{
    *g = kg * 1000;
    *pound = kg * 2.2;
    *tons = kg / 1000.0;
}