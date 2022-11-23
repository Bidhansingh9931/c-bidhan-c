#include<stdio.h>
#include<conio.h>
int main()
{
    int a[3][3],b[3][3],c[3][3],i,j,k;
    printf("enter the matrix of a\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
        printf("enter the matrix of b\n");
        for(i=0;i<3;i++)
        {
            for(j=0;j<3;j++)
            {
                scanf("%d",&b[i][j]);
            }
        }
        printf("multiplication of two matrix\n");
        for(i=0;i<3;i++)
        {
            for(j=0;j<3;j++)
            {
                c[i][j]=0;
                for(k=0;k<3;k++)
                {
                    c[i][j]=c[i][j]+a[i][j]*b[i][j];
                }
            }
        }
        printf("resultant of the matrix\n");
        for(i=0;i<3;i++)
        {
            for(j=0;j<3;j++)
            {
                printf("%d\t",c[i][j]);
            } 
            printf("\n");
        }
        getch();       
    }