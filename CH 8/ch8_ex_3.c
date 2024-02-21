//12/28/2023: alokesh maitra

#include <stdio.h>
//declaring the function prototype
int romanEquivalent(int , int , char);
int main(){
    int year;
//taking input from the user
printf("Enter your yr here : ");
scanf("%d", &year);
year = romanEquivalent(year,1000,'m');
year = romanEquivalent(year,500,'d');
year = romanEquivalent(year,100,'c');
year = romanEquivalent(year,50,'l');
year = romanEquivalent(year,10,'x');
year = romanEquivalent(year,5,'v');
year = romanEquivalent(year,1,'i');

return 0;

}
//defining the function defination
int romanEquivalent(int a, int c, char ch){
    int i,j;
    j= a/c;
    for(i=1; i<=j;i++){
        printf("%c",ch);
    }
    return (a%c);
}