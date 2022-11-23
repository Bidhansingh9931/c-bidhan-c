#include<stdio.h>
#include<conio.h>
float simple(float, float, float);
void main()
{
    float p,r,t,si;
    printf("enter the p,r,t");
    scanf("%f%f%f",&p,&r,&t);
    si=simple(p,r,t);
    printf("si=%f",si);
    getch();

}
float simple(float x, float y,float z)
{
    float c;
    c=(x*y*z)/100;
    return(c);
}