/*IF ages of Ram , Shayam and Ajay are input through the keyboard. Write the program to determine the youngest of the three*/
#include <stdio.h>
int main(){
int Ram , Shayam, Ajay;
printf("Enter The age of Ram , Shayam and Ajay: \n");
scanf("%d %d %d", &Ram, &Shayam, &Ajay);
if (Ram>Shayam && Ram > Ajay){
    printf("Ram is elderest amongest them.\n");
}
else if (Shayam > Ram && Shayam > Ajay)
{
    printf("Shayam is the Eldeset amongest them.\n");
}
else if (Ajay > Ram && Ajay>Shayam)
{
    printf("Ajay is the eldest amongest them.\n ");
}


return(0);
}