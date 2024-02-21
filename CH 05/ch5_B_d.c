#include <stdio.h>
int main(){
    int run=1,positive_count=0,negetive_count=0, zeroes_count=0, num, count =0;
    while(run){
        printf("Enter your number(enter an non numarical character to stop): \n");
        run = scanf("%d", &num);
    if(run){
        if (num < 0){
            negetive_count+=1;
            count +=1;
        }
        else if (num >0){
            positive_count+=1;
            count +=1;
        }
        else if(num == 0) {
            zeroes_count+=1;
            count +=1;
        }


    }
    }
        if (count > 0){
            printf("Positive numbers entered: %d\n Negetive numbers entered: %d\nzeroes entered: %d\n", positive_count, negetive_count, zeroes_count);
        }
        else if (count==0){
            printf("No numbers are entered\n");
        }
    return(0);
}