#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,c;
    printf("enter the any two number");
    scanf("%d%d",&a,&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("after interchange %d\n%d\n",a,b);
    getch();
}