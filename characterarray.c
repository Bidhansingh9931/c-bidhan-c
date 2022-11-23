#include<stdio.h>
#include<conio.h>
int main()
{
    char a[100][100],i,j;
    int r,c;
    printf("enter the row :");
    scanf("%d",&r);
    printf("enter the column :");
    scanf("%d",&c);
    printf("enter the elements of matrix\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%s",&a[i][j]);
        }
    }
    printf("display the elements\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%c\t",a[i][j]);
        }
        printf("\n");
    }
    getch();
}