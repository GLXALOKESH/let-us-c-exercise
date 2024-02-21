#include <stdio.h>
int main(){
    int n , i ,count= 1; float count2=1;
for ( n = 1; n<= 7;n++){
    count = 1;
    for(i=1;i<=n;i++){
        count *= i;
    }
    count2 += n/count;
}
    printf("here is your result: %d\n", count2);
return(0);
}