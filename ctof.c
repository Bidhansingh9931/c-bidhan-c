#include<stdio.h>
#include<conio.h>
int main()
{
    float c,F;
    printf("enter the temperature in celcious");
    scanf("%f",&c);
    F=((9*c)/5)+32;
    printf("temperature =%f",F);
    return 0;
}