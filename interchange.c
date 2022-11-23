#include<stdio.h>
#include<conio.h>
int main()
// 1st method
{
    int a,b,c;
    printf("enter the value of a and b\n");
    scanf("%d%d",&a,&b);
    c=a;
    a=b;
    b=c;
    printf("by 1st method of interchange=%d\n%d\n",a,b);
    // 2nd method
    a=a+b;
    b=a-b;
    a=a-b;
    printf("by 2nd method of interchange=%d\n%d\n",a,b);
    getch();
}