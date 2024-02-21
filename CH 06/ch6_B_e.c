#include <stdio.h>
#include <math.h>
int main(){
int a , b, c;
for(int i=1; i<=30; i++){
    for(int j =1; j<=30; j++ ){
        for(int k=1; k<=30; k++){
            if(pow(i,2)+pow(j,2)==pow(k,2)){
                printf("%d %d %d lenght makes Pythagorians triplet\n",i , j , k);
            }
        }
    }
}
return(0);
}