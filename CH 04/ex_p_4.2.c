#include <stdio.h>
int main(){
char character, check ;
printf("Enter Your Character:  \n");
scanf("%c",&character);
check = (int)character;
if((check>= 65) && (check <= 90)){
    printf("This is a Capital Letter\n");
}
else if ((check >= 97) && (check <= 122)){
    printf("This is a Small Case Letter\n");
}
else if ((check >= 48) && (check <= 57)){
    printf("This is a number\n");
}
else if (((check >= 0) && (check <= 47)) || ((check >= 58) && (check <= 64)) || ((check >= 91) && (check <= 96)) || ((check >= 123) && (check <= 127))){
    printf("This is a Special Symbol\n");
}
else {
    printf("This is an invalid input");
}
return(0);
}