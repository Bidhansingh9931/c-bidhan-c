//find prime using function 
// what is prime number 
// the number which is divisible by 1 and itself is called prime
#include<stdio.h>
#include<conio.h>
int prime();                 //declare the function
int main()
{
    prime();                //calling the function
    getch();
}
int prime()
{
    int i,n;
    printf("enter the any number ");
    scanf("%d",&n);
    int isprime=1;              //here isprime=1 means we fix that the given number is prime 
    for(i=2;i<n;i++)
    {
        if(n%i==0)
        isprime=0; //if n%i==0 means let n=4 and we have i=2 then 4%2==0 it is true then the result will be not prime
    } 
    if(isprime)
    {
        printf("the given number %d is prime",n);
    }
    else{
        printf("the given number %d is not prime",n);
    }
    return 0;
}
// thanks for watching 
//please like and subscribe for more updates