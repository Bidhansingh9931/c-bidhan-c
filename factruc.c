#include<stdio.h>
#include<conio.h>
int fact(int);
int main()
{
int m,n;
printf("enter the any one ");
scanf("%d",&n);
m=fact(n);
printf("%d",m);

return 0;
}
int fact(int n)
{
int i;
if(n<=1){
return (1);
}
else
{
return n * fact(n-1);

}
getch();
}