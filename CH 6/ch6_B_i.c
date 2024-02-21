#include <stdio.h>
int main(){
int i , j , k , l,n, m=1;
printf("Enter the value of n: ");
scanf("%d", &n);
// n=4;
l = n-1;
for(i=1; i<=n;i++){
    for (j=1; j<=l;j++){
        printf(" ");
    }
    for( k=1;k<=i;k++){
        printf("%d ",m);
        m++;
    }
    for (j=1; j<=l;j++){
        printf(" ");
    }
    l--;
    printf("\n");
}
scanf("%d");
return(0);
}