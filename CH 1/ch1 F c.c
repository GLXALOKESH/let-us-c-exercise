#include <stdio.h>
int main() {
    int width = 841, height = 1189 , size = 0 ,i , height2 = 0 ;
    printf("select your size : A");
    scanf("%d", &size);
    for(i = 0 ; i < size; i++){
        height2 = height / 2;
        height = width ;
        width = height2 ;
        int j = size-1;
        if (i == j ){
            printf("your paper dimention is : %d*%d\n", height , width );
        }
    }
    return 0;
     
}