#include<stdio.h>
#include<conio.h>
int main()
{
    int a[100][100],i,j,r,c;
    printf("Enter the number of row : ");
    scanf("%d",&r);
    printf("Enter the number of column :");
    scanf("%d",&c);
    printf("enter the matrix a\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("display the element of matrix\n");
    for(i=0;i<r;i=i+1)
    {
        for(j=0;j<c;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    getch();

}