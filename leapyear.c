#include<stdio.h>
#include<conio.h>
int leap();
int main()
{
    leap();
    getch();
}
    int leap()
 {
    int x;
    printf("enter the any number");
    scanf("%d",&x);
    if(x%4==0) {
    printf("the year %d is leap year\n",x);
    printf("and the day will be 366\n");
    }
    else {
    printf("the year %d is not leap year\n",x);
    printf("and the days will be 365\n"); 
    }
    getch();
}

