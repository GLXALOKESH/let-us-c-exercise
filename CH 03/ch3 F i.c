/*According to Gregorian calender, it was Monday on the date 01/01/01. If any year is input through the keyboard write a program to
find out what is th day on 1st january of this year*/
#include <stdio.h>
int leapyear(int );
int main(){
    int year, ret, rem, yr= 2001, day=0, i, day2  ;
    printf("Enter The year: \n");
    scanf("%d", &year);
    if (year < 2001){
        rem = 2001-year;
        for( i = 1 ; i<=rem; i++){
            yr = yr -1;
            // printf("%d\n", yr);
            ret = leapyear(yr);
            // printf("%d\n", ret);
            if (ret == 0){
                day += 365;
            }
            else{
                day += 366;
            }
        }
    }
    else if ( year > 2001){
        rem = year - 2001;
         for( i = 1 ; i<=rem; i++){
            yr = yr + 1;
            ret = leapyear(yr);
            if (ret == 0){
                day += 365;
            }
            else{
                day += 366;
            }
        }
    }
    else{
        printf("This is MONDAY\n");
    }
    // printf("%d", day);
// defining the day
day2 = day % 7;
if (year < 2001){
day2==1?printf("This is sunday\n"):printf(" ");
day2==2?printf("This is saturday\n"):printf(" ");
day2==3?printf("This is friday\n"):printf(" ");
day2==4?printf("This is thurstday\n"):printf(" ");
day2==5?printf("This is wednesday\n"):printf(" ");
day2==6?printf("This is tuesday\n"):printf(" ");
day2==0?printf("This is monday\n"):printf(" ");
}
else if(year > 2001) {
day2==6?printf("This is sunday\n"):printf(" ");
day2==5?printf("This is saturday\n"):printf(" ");
day2==4?printf("This is friday\n"):printf(" ");
day2==3?printf("This is thurstday\n"):printf(" ");
day2==2?printf("This is wednesday\n"):printf(" ");
day2==0?printf("This is monday\n"):printf(" ");
}
}
//checking if the entered year is leap year or not.
int leapyear(int n){
    int ret;
    if  ((( n% 400 == 0) && (n % 100 != 0)) || (n % 4 == 0) ) {
        ret = 1;

    }
    else {
        ret = 0;
    }
    return (ret);
}