#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,c;
    printf("enter the any two number\n");
    scanf("%d%d",&a,&b);
    int choice;
    printf("enter your choice\n");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
        c=a+b;
        printf("sum=%d",c);
        break;
        case 2:
        c=a-b;
        printf("sub=%d",c);
        break;
        case 3:
        c=a*b;
        printf("mul=%d",c);
        break;
        case 4:
        c=a/b;
        printf("div=%d",c);
        break;
        default:
        printf("sorry please enter the correct choice\n");
         
    } 
    return 0;
}