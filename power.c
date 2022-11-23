#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
    int a, b,p;
    printf("enter the base number\n");
    printf("and then enter the exponent\n");
    scanf("%d%d",&a,&b);
    p=pow(a,b);
    printf("result = %d",p);
    getch();

}