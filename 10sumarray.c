#include<stdio.h>
#include<conio.h>
int main()
{
    int a[10],i,sum=0;
    printf("enter the desire number");
    {
        for(i=0;i<10;i++)
        {
            scanf("%d",&a[i]);
            sum=sum+a[i];
        }
        printf("sum=%d",sum);
    }
    getch();
}