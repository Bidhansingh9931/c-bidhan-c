#include<stdio.h>
#include<conio.h>
int main()
{
    int n=5;
    int i,j;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
    if(j==1 || j==n || i==j)
    {
        printf("*");
    }
    else{
        printf(" ");
    }
        }
    printf("\n");
    }
    getch();
}