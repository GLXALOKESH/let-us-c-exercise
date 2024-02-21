#include<stdio.h>
int main(){
    printf("-------------Welcome to the matchbox masters---------------\n");
    printf("Rules: 1. There are 21 machsticks in total\n2.One can choose 1, 2, 3, or 4 matchsticks at a time\n3.There is only 21 matchsticks in total\n4.last player choosing matchstick will lose\nlets start\n");
    int player,computer, total;
    for (total = 0; total < 20; ){
        printf("Enter your choice(1,2,3,4) : \n");
        scanf("%d",&player);
        if ( (player >0) && (player < 5)){
            total+= player;
            if (total <16){
                printf("Computer has chosen: 1\n");
                total+=1;
            }
            else if (total == 16){
                printf("computer has chosen: 4\n");
                total+=4;
            }
            else if (total == 17){
                printf("computer has chosen: 3\n");
                total+=3;
            }
               else if (total == 18){
                printf("computer has chosen: 2\n");
                total+=2;
            }
               else if (total == 19){
                printf("computer has chosen: 1\n");
                total+=1;
               }
               printf("Matchsticks left: %d\n", (21 - total));
        }
        else{
            printf("please input a valid option\n");
        }
    }
        printf("You have to choose the last matchstick\n");
        printf("You Lose\n");
    
    return (0);
}