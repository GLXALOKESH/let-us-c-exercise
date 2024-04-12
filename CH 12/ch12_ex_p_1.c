#include <stdio.h>
# pragma warn -rvl
# pragma warn -par
# pragma warn -rch

# define ISUPPER(x) (x >= 65  && x <= 90?1:0)
# define ISLOWER(x) (x >= 97 && x <= 122 ? 1 : 0)
# define ISALPHA(x) (ISUPPER(x) || ISLOWER(x))
# define BIG(x,y)(x>y?x:y)

int main(){
    char ch;
    int a,b,d;
    printf("Enter Your Character here: \n>");
    scanf("%c",&ch);
    if (ISUPPER (ch)==1){
        printf("\n\tYour character is an upper case letter.\n");
    }
    if (ISLOWER(ch)==1){
        printf("\n\tYour character is a lower case letter.\n");
    }
    if (ISALPHA(ch) !=1){
        printf("Invalid Character Entered. Please Enter A Valid Character.\n");
    }
    printf("Enter any Two Numbers: \n>");
    scanf("%d%d",&a,&b);
    d = BIG(a,b);
    printf("\n\tThe Bigger Number is %d.\n", d);

    return 0;
}