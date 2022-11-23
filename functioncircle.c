#include<stdio.h>
#include<conio.h>
int a(int);
int main()
{
    float a,r;
    float pi = 3.14;
    printf("enter the radius of circle");
    scanf("%f",&r);
    a=pi*r*r;
    printf("area=%f",a);
    getch();
}
int area(float x)
{
    float z;
    float pi = 3.14;

    z = pi * x * x;
    return (z);
}

