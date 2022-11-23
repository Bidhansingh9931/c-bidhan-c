#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    char str1[10],str2[10];
    int value;
    printf("enter the string");
    gets(str1);
    printf("enter the string 2");
    gets(str2);
    value=strcmp(str1,str2);
    printf("%d",value);
    getch();

}