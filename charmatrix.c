#include<stdio.h>
#include<conio.h>
int main()
{
    char a[3][3],i,j;
    printf("enter the matrix\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%c%c",&a[i][j]);

        }
    }
    printf("display the elements of matrix\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%c\t",a[i][j]);
        }
        printf("\n");
    }
    getch();
}