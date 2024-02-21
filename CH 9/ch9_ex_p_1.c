#include <stdio.h>
#include <math.h>
void fn(int *, int *, double *);
int main()
{
    int sum, avg;
    double stdv;
    fn(&sum, &avg, &stdv);
    printf("sum:%d \n avg:%d \n stdv:%lf", sum , avg , stdv);
}
void fn(int *sum, int *avg, double *stdv){
    int n1 , n2 ,n3 , n4, n5;
    printf("Enter your numbrs here: ");
    scanf("%d %d %d %d %d", &n1,&n2,&n3,&n4,&n5);
    *sum = n1 + n2 +n3 +n4 +n5;
    *avg = *sum /5;
    *stdv = sqrt((pow((n1-*avg),2.0) + pow((n2-*avg),2.0)+ pow((n3-*avg),2.0)+ pow((n4-*avg),2.0)+pow((n5-*avg),2.0))/4);

}