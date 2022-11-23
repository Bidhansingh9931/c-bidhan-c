#include<stdio.h>
#include<conio.h>
void all(int,int);
void main()
{
    int a,b,c;
    printf("enter the value of a and b");
    scanf("%d%d",&a,&b);
    all(a,b);
    getch();
}
void all(int x,int y)
{
    int w;
    w=x+y;
    printf("sum=%d\n",w);
    w=x-y;
    printf("sub=%d\n",w);
    w=x*y;
    printf("mul=%d\n",w);
    w=x/y;
    printf("div=%d\n",w);
}