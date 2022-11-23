#include<stdio.h>
#include<conio.h>
int main()
{
    int a[10],i;
    printf("enter the any numbers\n");
    for(i=0;i<10;i=i+1)
    {
        scanf("%d",&a[i]);
    }
    printf("display the input\n");
    for(i=0;i<10;i=i+1)
    {
       printf("%d\n",a[i]); 
    }
    getch();
}


// i=0,i=i+1 
// i=0+1=1
// i=1+1=2
// i=2+1=3
// i=9+1=10
// i=10+1=11