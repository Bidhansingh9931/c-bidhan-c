#include<stdio.h>
#include<conio.h>
int main()
{
    char str[3][3];
    int i,j;
    printf("enter the character in matrix\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%c",&str[i][j]);
        }
    }
    printf("display the character matrix\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%c\t",str[i][j]);
            
        }
        printf("\n");
    }
    getch();

}