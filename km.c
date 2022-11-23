#include<stdio.h>
#include<conio.h>
int main()
{
    float km,m,cm,feet;
    printf("enter the distance in km");
    scanf("%f",&km);
    m=km*1000;
    cm=km*100;
    feet=cm*2.56;
    printf("%f\n%f\n%f\n",m,cm,feet);
    return 0;
}