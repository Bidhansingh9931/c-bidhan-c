#include<stdio.h>
int main()
{
    int n,tn ,sum=0;
    printf("enter the desire number");
    scanf("%d",&tn);
    printf("now enter your desire number");
    for(int i=1;i<=tn;i++)
     {
        scanf("%d",&n);
    sum=sum+n;
    }
    printf("sum of your desire number is %d",sum);
     return 0;
}