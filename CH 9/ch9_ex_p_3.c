#include <stdio.h>
int main(int argc, char const *argv[])
{
    float number;
    float *address1;
    float **address2;
    number= 3.14;
    address1 = &number;
    address2 = &address1;
    printf("%p %p %p\n", &number, &address1,&address2);
    printf("%p %p\n", address1, address2);
    printf("%f %f %f", number, *address1, **address2);
    return 0;
}