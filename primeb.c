#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int prime(); //declare the function
int main()
{
    prime(); //call the function
    getch();
}
int prime(){
    int n;
    printf("enter the number");
    scanf("%d",&n);
    int isprime =1; //we fix that n is prime 
    for(int i = 2; i < n; i++)  //we take i=2 due to below formula 
    {
        if(n%i==0){   //now the number will divided by 2
            isprime = 0; //here system will prove false if it is not prime
        }
        }
        if(isprime){
            printf("The number %d is prime\n",n);
        }
        else{
            printf("the number %d is not prime\n",n);
        }
        int choice;
        printf("enter your choice\n");
        printf("1.next\n 2.exit\n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
            main();
            printf("1.next\n");
            break;
            case 2:
            exit(0);
            printf("2.exit\n");
            break;
            default:
            printf("thank you \3");
        }
    return 0;
}