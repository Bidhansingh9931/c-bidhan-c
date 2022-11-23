#include<stdio.h>
#include<conio.h>
void indian();
void bonjour();
int main()
{
    printf("enter the f for french & i for indian :");
    char ch;
    scanf("%c",&ch);
    if(ch=='i'){
        indian();
    }
    else
    {
        bonjour();
    }
    return 0;
}
void indian(){
    printf("namaste\n");
}
void bonjour(){
    printf("bonjour\n");
}