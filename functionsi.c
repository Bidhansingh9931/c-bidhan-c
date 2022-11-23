#include<stdio.h>
#include<conio.h>
int si(int,int,int);
int main()
{
    float p,r,t; float si;
    printf("enter the principle,rate and time for simple interest");
    scanf("%f%f%f",&p,&r,&t);
    si=(p*r*t)/100;
    printf("simple interest:%f",si);
    getch();
}
int si(int c, int d, int e)
{
    int f;
    f= (c*d*e)/100;
    return(f);
}
