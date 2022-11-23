#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    int number,guess,nguesses=1;
    srand(time(0));
    number = rand()%100+1;// generate the number between 1 to 100
    //printf("the number is %d\n" ,number);
    do{
        printf("guess the number brtween 1 to 100\n");
        scanf("%d",&guess);
        if(guess>number){
            printf("enter the lower number please!\n");
        }
        else if(guess<number){
            printf("enter the higher number please!\n");
          }  else{
                printf("you guessed it in %d\n attempts",nguesses);
            }
    nguesses++;
    }while(guess!=number);
    return 0;
    }