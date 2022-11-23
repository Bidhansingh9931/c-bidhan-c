#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,c;
    printf("enter the any three number\n");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b)
    {
        if(a>c)
            printf("%d is greater than %d and %d\n",a,b,c);
        else
            printf("%d is greater than %d and %d\n",c,a,b);
        }
        else 
        if(b>c)
        {
            printf("%d is greater than %d and %d\n",b,c,a);
        }
            else {
                printf("%d is greater than %d and %d\n",c,a,b);
            }
     getch();
}