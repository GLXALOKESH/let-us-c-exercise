#include <stdio.h>
int main(){
    float cost , selling_price, profit, loss ;
printf("Enter the cost of product and selling price of the product : \n");
scanf("%f %f", &cost, &selling_price);
if (selling_price > cost ){
    profit = selling_price - cost ;
    printf("The seller has got a profite of Rs. %.2f\n ", profit);
}
else if ( selling_price == cost){
    printf("No profit/loss\n");
}
else {
    loss = cost - selling_price;
    printf("The seller has got a loss of Rs. %.2f\n", loss);
}
return(0);
}