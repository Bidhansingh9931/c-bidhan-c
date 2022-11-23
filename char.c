#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=i;j++)
        {
            if(i==1)
                printf(" A ");
            else if(i==2)
                printf(" B "); 
            else if(i==3)
                printf(" C ");
            else if(i==4)
                printf(" D ");
            else if(i==5)
                printf(" E ");
        }
            printf("\n");
    }
        return 0;
}