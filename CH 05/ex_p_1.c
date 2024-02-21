/*Write a program to calculate overtime pay of 10 employees. Overtime is paid at the rate of Rs. 120.00 per hour for every hour worked above
40 hours. Assume that employees do not work for fractional part of an hour.
Alokesh Maitra 
10 11 2023*/
#include <stdio.H>
int main(){
    int employes, ot, th;
    printf("Enter the count of employes: \n");
    scanf("%d", &employes);
    for (int i = 1;i <= employes ; i++ ){
        printf("Enter the total hour the employee worked: \n");
        scanf("%d", &th);
        if (th>40){
            printf("Total overtime payment: %d\n", ((th-40)*120));
        }
        else {
            printf("No overtime\n");
        }
    }
    return (0);
}