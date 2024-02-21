#include <stdio.h>
int leapyear(int);
int main(){
    int year, ret;
printf("Enter the year : \n>");
scanf("%d",&year);
ret = leapyear(year);
if(ret ==0){
    printf("This is not a leap year\n");
}
else{
    printf("This is a leap year\n");
}
}
int leapyear(int year){
    if((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)){
        return 1;
    }
    else{
        return 0;
    }
}