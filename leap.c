#include<stdio.h>
#include<conio.h>
int main()
{
    int year;
    printf("enter the number");
    scanf("%d",&year);
    if(year % 4 == 0)
    {
        printf("the year %d is leap year\n",year);
    }
    else{
        printf("the year %d is not leap year",year);
    }
    return 0;
}