#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter the value of a,b and c ");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b)
    {
        if(a>c)
        printf("a is greater than b and c");
    else
    printf("c is greater than a and b");     
    }
    else{
        if(b>c)
        printf("b is greater than a and c");
    else
    printf("c is greater than a and b");
    }
    return 0;

}
