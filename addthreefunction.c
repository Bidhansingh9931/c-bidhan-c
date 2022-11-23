#include<stdio.h>
#include<conio.h>
int sum(int,int,int);
int main()
{
    int a,b,c,d;
    printf("enter the any three value");
    scanf("%d%d%d",&a,&b,&c);
    d=a+b+c;
    printf("%d + %d + %d = %d\n",a,b,c,d);
    getch();
}
int sum( int x,int y,int z)
{
    int a;
    a = x+y+z;
    return (a);
}
