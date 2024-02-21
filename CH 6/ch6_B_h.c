#include <stdio.h>
int main(){
    int p =1;
for (int i=1;i<=24;i++){
    if(i>=1 && i<=12){
        printf("the time is: %d AM ",i);
    }
    else {
        printf("the time is: %d Pm ", p);
        p++;
    }
    if (i>=12 && i<=15){
        printf("Noon\n");
    }
    else if (i == 24){
        printf("Midnight\n");
    }
    else {
        printf("\n");
    }
}
return(0);
}