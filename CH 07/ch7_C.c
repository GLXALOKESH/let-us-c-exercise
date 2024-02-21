#include <stdio.h>
#include <stdlib.h>
int main(){
int class, faildsub;
do{
printf("1. First class\n2. Second class\n3. Third class\n4. Exit\nEnter your choice: \n");
scanf("%d", &class);
switch(class){
    case 1:
    printf("in how many subjects did you faild: \n");
    scanf("%d",&faildsub);
    abs(faildsub);
    if (faildsub > 3){
        printf("No grace marks\n");
    }
    else{
        printf("Grace marks %d\n",faildsub*5);
    }
    break;
    case 2:
      printf("in how many subjects did you faild: \n");
    scanf("%d",&faildsub);
    abs(faildsub);
    if (faildsub > 2){
        printf("No grace marks\n");
    }
    else{
        printf("Grace marks %d\n",faildsub*4);
    }
    break;
    case 3:
      printf("in how many subjects did you faild: \n");
    scanf("%d",&faildsub);
    abs(faildsub);
    if (faildsub > 1){
        printf("No grace marks\n");
    }
    else{
        printf("Grace marks %d\n",faildsub*5);
    }
    break;
    case 4:
    class =4;
    break;
    default:
    printf("please choose a valid option\n");

}
}while(class != 4) ;
return(0);
}