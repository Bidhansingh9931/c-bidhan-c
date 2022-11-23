#include<stdio.h>
#include<conio.h>
int main()
{
    int i=1,f=1,n;
    printf("enter the any number");
    scanf("%d",&n);
    while(i<=n)
    {
        f=f*i;
        printf("%d\n",f);
        i++;
    }
    getch();
}