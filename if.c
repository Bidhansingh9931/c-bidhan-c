#include<stdio.h>
#include<conio.h>
int main()
{
    int age;
    printf("enter your age ");
    scanf("%d",&age);
    if(age>=18)
    {
        printf("you are eligible for votting");
    }
    else
    {
        printf("you are not eligible for votting");
    }
    getch();
}