#include<stdio.h>
#include<conio.h>
int temp();
int main()
{
    temp();
    getch();
}
int temp()
{
    float c,f;
    printf("enter the temperature in celcious");
    scanf("%f",&c);
    f=(c*9/5)+32;
    printf("temperature=%f degree fahrenheit:\n",f);
    getch();
}