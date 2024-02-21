#include <stdio.h>
int main(){
    char character;
    int char_value;
printf("Enter your character: \n");
scanf("%c",&character);
char_value = (int)character;
if(char_value >= 97 && char_value <= 122){
    printf("This is an lower case character\n");
}
else if ((char_value >= 0 && char_value <= 47) || (char_value >= 58 && char_value <= 64) || (char_value >= 91 && char_value <= 96) || (char_value >= 123 && char_value <= 127)){
    printf("This is a special character\n");
}
else{
    printf("Invalid Input\n");
}
return(0);
}