#include<stdio.h>
#include<conio.h>
int main()
{
    int i=1,n,f=1;
    printf("enter the any number ");
    scanf("%d",&n);
    while(i<=n)
    {
        f=f*i;
        i++;
        printf("factorial=%d\n",f);
    }
    return 0;

}