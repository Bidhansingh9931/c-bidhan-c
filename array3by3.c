#include<stdio.h>
#include<conio.h>
int main()
{
    int a[3][3],i,j;
    printf("enter the array a\n");
    for(i=0;i<3;i=i+1)
    {
        for(j=0;j<3;j=j+1)
        {
            scanf("%d",&a [i] [j]);
        }
    }
    printf("display the elements of a\n");
    for(i=0;i<3;i=i+1)
    {
        for(j=0;j<3;j=j+1)
        {
            printf("%d\t",a [i] [j]);
        }
        printf("\n");
    }
    getch();
}