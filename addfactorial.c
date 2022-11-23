#include<stdio.h>
int sum(int,int);
int main()
{
    int a,b,c;
    printf("enter the any two number");
    scanf("%d%d",&a,&b);
    c=sum(a,b);
    printf("sum=%d\n",c);
    main();
    return 0;
}
int sum(int x, int y)
{
    int z;
    z = x + y;
    return(z);
}