#include<stdio.h>
#include<conio.h>
int main()
{
int a[100][100],i,j,row,col,b[100][100],c[100][100];
printf("enter the no. of rows of 1st matrix :");
scanf("%d",&row);
printf("enter the no. of column of 1st matrix :");
scanf("%d",&col);
printf("enter the elements of matrix :");
for(i=0;i<row;i++)
{
    for(j=0;j<col;j++)
    {
        scanf("%d",&a[i][j]);
    }
}
        printf("display the elements of 1st matrix :\n");
        for(i=0;i<row;i++)
{
    for(j=0;j<col;j++)
    {
        printf("%d\t",a[i][j]);
    }
    printf("\n");
}
    printf("enter the no. of rows of 2nd matrix :");
scanf("%d",&row);
printf("enter the no. of column of 2nd matrix :");
scanf("%d",&col);
printf("enter the elements of matrix\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
          scanf("%d",&b[i][j]);  
        }
    }
    printf("display the elements of 2nd matrix\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
          printf("%d\t",b[i][j]);  
        }
        printf("\n");
    }
    printf("addition of two matrix a and b\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            c[i][j]=a[i][j]+b[i][j];
        }
    }
    printf("resultant of matrix\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("%d\t",c[i][j]);
        }
        printf("\n");
    }
    getch();
}