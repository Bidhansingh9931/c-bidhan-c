#include<stdio.h>
#include<conio.h>
int main()
{
    int p,c,m,h,e;
    char grade;
    float per;
    printf("enter the marks of physics,chemestry,math,hindi,english");
    scanf("%d%d%d%d%d",&p,&c,&m,&h,&e);
    per = (p+c+m+h+e)*100/500;
    if(per>=85)
    {
        printf("grade=%c",'A');
    }
    else
    if(per>=70 && per<85)
    {
        printf("grade=%c",'B');
    }
    else
    if(per<=55 && per<70)
    {
        printf("grade=%c",'c');
    }
    else
    if(per<=40 && per<55)
    {
        printf("grade=%c",'D');
    }
    else
    {
        printf("grade=%c",'R');
    }
    getch();

}