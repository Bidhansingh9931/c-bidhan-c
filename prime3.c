// what is prime number 
// the number which is divisible by 1 and itself only is called prime number
#include<stdio.h>
#include<conio.h>
int main()
{
    int n;
    printf("enter any number");
    scanf("%d",&n);
    int isprime=1;
    for(int i=2;i<n;i=i+1)
    {

        if(n%i==0)
        {
            isprime=0;
        }
        if(isprime)
        {
            printf("the number %d is prime number",n);
        }
        else{
            printf("the number %d is not prime",n);
        }
        return 0;


    }












}
