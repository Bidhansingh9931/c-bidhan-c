#include<stdio.h>
#include<conio.h>
int main()
{
    int a[2][2],i,j;
    printf("enter the array a\n");
    for(i=0;i<2;i=i+1)
    {
        for(j=0;j<2;j=j+1)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("display the elements of matrix :\n");
    for(i=0;i<2;i=i+1)
    {
        for(j=0;j<2;j=j+1)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    printf("display the transpose of matrix :\n");
    for(i=0;i<2;i=i+1)
    {
        for(j=0;j<2;j=j+1)
        {
            printf("%d\t",a[j][i]);
        }
        printf("\n");
    }
    getch();
}