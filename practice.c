#include<stdio.h>
int main()
{
    int a,b,c,choice;
    printf("enter any two number");
    scanf("%d %d",&a,&b);
    printf("enter your choice\n");
    printf("1.add\n2.sub\n3.mul\n4.div\n5.modulous\n");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
        c=a+b;
        printf("%d + %d = %d",a,b,c);
        break;
        case 2:
        c=a-b;
        printf("%d - %d = %d",a,b,c);
        break;
        case 3:
        c=a*b;
        printf("%d * %d = %d",a,b,c);
        break;
        case 4:
        c=a/b;
        printf("%d / %d = %d",a,b,c);
        break;
        case 5:
        c=a%b;
        printf("%d % %d = %d",a,b,c);
        default:
        printf("please enter the correct value");
    }
   
    return 0;
}