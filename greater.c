#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,c;
    printf("enter the any three number");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b)
    {
        if(a>c)
        printf("a is greater");
        else
        printf("c is larger");
    }
    else if(b>c)
    printf("b is greater");
    else
    printf("c is greater");
    getch();
}