#include<stdio.h>
#include<conio.h>
#define pi 3.14
int main()
{
    int r,a,p;
    printf("enter the radius of circle");
    scanf("%d",&r);
    a=pi*r*r;
    printf("area=%d\n",a);
    p=2*pi*r;
    printf("perimeter=%d\n",p);
}