#include<stdio.h>
#include<conio.h>
int main()
{
    int p,c,m,h,e;
    float  per;
    char grade;
    printf("enter the five subject marks");
    scanf("%d%d%d%d%d",&p,&c,&m,&h,&e);
    per=(p+c+m+h+e)*100/500;
     if(per>=85)
     {
        printf("grade=%c",'A');
        else
        printf("")
     }
    getch();
}