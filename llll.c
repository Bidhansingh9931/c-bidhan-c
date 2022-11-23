#include<stdio.h>
#include<conio.h>
int main()
{
    int sub1,sub2,sub3,sub4,sub5;
    int average;
    printf("enter the marks\n");
    scanf("%d%d%d%d%d",&sub1,&sub2,&sub3,&sub4,&sub5);
    average=(sub1+sub2+sub3+sub4+sub5)/5;
    printf("average of five subject=%d",average);
    getch();
}