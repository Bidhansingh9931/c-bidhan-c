#include<stdio.h>
#include<conio.h>
int main()
{
    int i,n;
    printf("enter the number");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
    printf("the number is %d\n",i);
        if(i%2==0)
        {
            printf("and the number %d is even\n",i);
        }
        else
        {
            printf("and the number %d is odd\n",i);
        }
    }
    return 0;
}