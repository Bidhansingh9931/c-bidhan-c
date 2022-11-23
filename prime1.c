#include<stdio.h>
#include<conio.h>
int sum();
int main()
{
    sum();
    return 0;
}
int sum()
{
int a,b,c;
printf("enter the number");
scanf("%d%d",&a,&b);
c=a+b;
printf("sum=%d",c);
getch();
}