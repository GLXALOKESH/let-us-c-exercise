#include <stdio.h>
int main(){
int rupees, rs1, rs2,rs5,rs10,rs50,rs100;
printf("Enter total amount of money: ");
scanf("%d", &rupees);
rs100 = rupees / 100;
rupees = rupees % 100;
rs50 = rupees /50;
rupees = rupees % 50;
rs10 = rupees / 10;
rupees = rupees % 10;
rs5 = rupees / 5;
rupees = rupees %5;
rs2 = rupees / 2;
rupees = rupees % 2;
rs1 = rupees /1;
int total;
total = rs100 + rs50 + rs10 + rs5+ rs2 + rs1;
printf("Minimum number of notes neded is : %d", total);
return(0);
}