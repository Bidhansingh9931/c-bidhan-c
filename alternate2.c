#include<stdio.h>
main()
{
    int a,b,c;
    printf("enter the value of a and b");
    scanf("%d%d",&a,&b);
    c=a;
    a=b;
    b=c;
    printf("afeter interchange=%d\n%d\n",a,b);
    return 0;
}