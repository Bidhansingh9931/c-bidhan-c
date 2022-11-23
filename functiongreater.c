#include<stdio.h>                                         
#include<conio.h>
int greater(int,int,int);
int main()
{
    int a,b,c;
    printf("enter any three value");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b)
    {
    if(a>c)
        printf("a is larger");
    else
        printf("c is larger");
    }
    else
    if(b>c) 
    printf("b is larger");
    else 
        printf("c is larger");
    getch();
}
int greater(int x,int y,int z)
{
    if(x>y)
    {
     if(x>z)
     printf("x is greater");
     else
     printf("z is greater");
    }
    if(y>z)
    printf("y is greater");
    else
    printf("z is greater");
    return(x,y,z);
}