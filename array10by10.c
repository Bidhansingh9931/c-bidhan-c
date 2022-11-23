#include<stdio.h>
#include<conio.h>
int main()
{
    int a[10][10],i,j;
    printf("enter the array a\n");
    for(i=0;i<10;i++)
    {
        for(j=0;j<10;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("display the elements of array :\n");
    for(i=0;i<10;i++)
    {
        for(j=0;j<10;j++)
        {
            printf("%d\t",a[i][j]);

        }
        printf("\n");
    }
    getch();
}