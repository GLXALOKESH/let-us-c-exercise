#include <stdio.h>
int main(){
int n, i ;
for (n=1 ; n<=300;n++){
    
    for (i=2;i < n; i++) {
        if (n%i==0){
            break;
        }
    }
    if (n==i){
        printf("%d ",n);
    }
}
return(0);
}