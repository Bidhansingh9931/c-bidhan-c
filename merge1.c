#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    char str[15],str1[15];
    printf("enter the any string 1\n");
    gets(str);
    printf("enter the string 2\n");
    gets(str1);
    strcat(str,str1);
    printf("%s",str);
    getch();
}