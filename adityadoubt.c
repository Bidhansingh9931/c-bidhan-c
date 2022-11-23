#include<stdio.h>
#include<conio.h>
int sum(int,int,int);
int main()
{
    int a,b,c,d;
    printf("enter the any three value");
    scanf("%d%d%d",&a,&b,&c);
    d=sum(a,b,c);
    printf("sum=%d",d);
getch();
}
int sum(int x,int y,int v)
{
    int z;
    z=x+y+v;
    return(z);
}

