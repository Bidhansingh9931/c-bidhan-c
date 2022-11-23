#include<stdio.h>
#include<conio.h>
int main()
{
    int n,p,i,f=1;
    printf("enter the number");
    scanf("%d",&n);
    printf("enter the power");
    scanf("%d",&p);
    for(i=1;i<=p;i=i+1)
    {
       f=n*f; 
        printf("%d\n",f);
    }
    return 0;
}
/* 
enter the number
4
enter the power
4

i=1,i<=p,i=i+1;
i=1,2,3,4;

f=n*f;
f=4*1=4
f=4*4=16
f=4*16=64
f=4*64=256







*/