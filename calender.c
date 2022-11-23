#include<stdio.h>
#include<conio.h>
int main()
{
    int a[100][100],i,j,r,c;
    printf("enter the rows :");
    scanf("%d",&r);
    printf("enter the column");
    scanf("%d",&c);
    printf("enter the elements of matrix\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);  
        }
    }
    printf("display the number:\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
           printf("%d\t",a[i][j]);
        }
        printf("\n");
    }

    getch();
}