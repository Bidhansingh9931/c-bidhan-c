#include<stdio.h>
#include<conio.h>
int mod();
int main()
{
    mod();
    getch();
}
int mod(){
    int a,b,c;
    printf("enter the number");
    scanf("%d%d",&a,&b);
    c=a%b;
    printf("remainder=%d",c);
    return 0;

}