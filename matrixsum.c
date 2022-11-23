#include<stdio.h>
#include<conio.h>
int main()
{
int a[3][3],i,j,sum=0;
printf("enter the elements of matrix\n");
for(i=0;i<3;i++)
{
    for(j=0;j<3;j++)
    {
        scanf("%d",&a[i][j]);
        sum=sum+a[i][j];
    }
    }
     
     printf("display the elements of matrix :\n");
     {
        for(i=0;i<3;i++)
        {
            for(j=0;j<3;j++)
            {
                printf("%d\t",a[i][j]);
                
            }
            printf("\n");
            
        }
        printf("sum=%d\n",sum);
     getch();
     }
}
