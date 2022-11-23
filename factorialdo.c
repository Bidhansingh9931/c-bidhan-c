#include<stdio.h>
int main()
{
    int i=1,n,f=1;
    printf("enter the number ");
    scanf("%d",&n);
    do
    {
        f=f*i;
        printf("%d\n",f);
        i=i+1;
    }
    while(i<=n);
    return 0;
}