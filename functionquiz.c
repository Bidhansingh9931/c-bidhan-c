#include<stdio.h>
#include<conio.h>
int mul(int , int );
int main()
{
    int l,b,a;
    printf("enter the lenth and bredth of a rectangle");
    scanf("%d%d",&l,&b);
    a=l*b;
    printf("lenth = %d and breadth = %d\n then area:- %d\n",l,b,a);
    getch();
}
int mul(int x, int y)
{
int z;
z = x * y;
return (z);
}