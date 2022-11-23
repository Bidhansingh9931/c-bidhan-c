#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
    float a,b,c;
    int n;
    int choice;
    printf("enter any two number");
    scanf("%f%f",&a,&b);
    printf("enter what you want to do\n");
    printf("1.addition\n2.substraction\n3.multiplication\n4.division\n5.prime number\n6.larger\n7.even or odd\n8.simple interest\n9.check leap year or not\n10.celcious to fahrenheit\n11.killometer to meter\n12.square root\n13.percentage\n");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
        c=a+b;
        printf("%f + %f = %f\n",a,b,c);
        //int choice; //we are taking choice for exit or next 
        printf("Now Enter Your Choice :\n");
        printf("1.Next :\n2.Exit :\n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
            main(); // main function will repeat your program
            printf("1.next\n");
            break;
            case 2:
            exit(0); //exit 0 means now the compilation will not give you any result 
            printf("2.exit\n");
            break;
            default:
            printf("Sorry  Sir Please Enter The Above Two Choice \3 \2\n");
            printf("thank you \2 \2 \2 \3 \3 \3\n");
            return 0;
        }
        case 2:
        c=a-b;
        printf("%f - %f = %f\n",a,b,c);
         printf("Now Enter Your Choice :\n");
        printf("1.Next :\n2.Exit :\n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
            main(); // main function will repeat your program
            printf("1.next\n");
            break;
            case 2:
            exit(0); //exit 0 means now the compilation will not give you any result 
            printf("2.exit\n");
            break;
            default:
            printf("Sorry  Sir Please Enter The Above Two Choice \3 \2\n");
            printf("thank you \2 \2 \2 \3 \3 \3\n");
            return 0;
        }
        break;
        case 3:
        c=a*b;
        printf("%f * %f = %f\n",a,b,c);
         printf("Now Enter Your Choice :\n");
        printf("1.Next :\n2.Exit :\n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
            main(); // main function will repeat your program
            printf("1.next\n");
            break;
            case 2:
            exit(0); //exit 0 means now the compilation will not give you any result 
            printf("2.exit\n");
            break;
            default:
            printf("Sorry  Sir Please Enter The Above Two Choice \3 \2\n");
            printf("thank you \2 \2 \2 \3 \3 \3\n");
            return 0;
        }
        break;
        case 4:
        
        c=a/b;
        printf("%f / %f = %f\n",a,b,c);
         printf("Now Enter Your Choice :\n");
        printf("1.Next :\n2.Exit :\n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
            main(); // main function will repeat your program
            printf("1.next\n");
            break;
            case 2:
            exit(0); //exit 0 means now the compilation will not give you any result 
            printf("2.exit\n");
            break;
            default:
            printf("Sorry  Sir Please Enter The Above Two Choice \3 \2\n");
            printf("thank you \2 \2 \2 \3 \3 \3\n");
            return 0;
        }
        break;
        case 5:
    printf("enter the number");
    scanf("%d",&n);
    int isprime =1; //we fix that n is prime 
    for(int i = 2; i < n; i++)  //we take i=2 due to below formula 
    {
        if(n%i==0){   //now the number will divided by 2
            isprime = 0; //here system will prove  us false
        }
        }
        if(isprime){
            printf("The number %d is prime\n",n);
        }
        else{
            printf("the number %d is not prime\n",n);
        }
        int choice; //we are taking choice for exit or next 
        printf("Now Enter Your Choice :\n");
        printf("1.Next :\n2.Exit :\n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
            main(); // main function will repeat your program
            printf("1.next\n");
            break;
            case 2:
            exit(0); //exit 0 means now the compilation will not give you any result 
            printf("2.exit\n");
            break;
            default:
            printf("Sorry  Sir Please Enter The Above Two Choice \3 \2\n");
            printf("thank you \2 \2 \2 \3 \3 \3\n");
    return 0;
}
  int x,y,z;{
        case 6:
        printf("enter the any three number\n");
    scanf("%d%d%d",&x,&y,&z);
  if(x>y)
    {
        if(x>z)
        printf("%d is larger\n",x);
        else
        printf("%d is larger\n",z);
    }
    else
    if(y>z)
    printf("%d is larger\n",y);
    else
    printf("%d is largerer\n",z);
    }
        printf("Now Enter Your Choice :\n");
        printf("1.Next :\n2.Exit :\n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
            main(); // main function will repeat your program
            printf("1.next\n");
            break;
            case 2:
            exit(0); //exit 0 means now the compilation will not give you any result 
            printf("2.exit\n");
            break;
            default:
            printf("Sorry  Sir Please Enter The Above Two Choice \3 \2\n");
            printf("thank you \2 \2 \2 \3 \3 \3\n");
            return 0;
        }
        break;
        int a;
        //even or odd
        case 7:
          printf("enter the any number\n");
    scanf("%d",&a);
    if(a % 2==0)
    printf("%d is even number\n",a);
    else
    printf("%d is odd number\n",a);
    printf("Now Enter Your Choice :\n");
        printf("1.Next :\n2.Exit :\n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
            main(); // main function will repeat your program
            printf("1.next\n");
            break;
            case 2:
            exit(0); //exit 0 means now the compilation will not give you any result 
            printf("2.exit\n");
            break;
            default:
            printf("Sorry  Sir Please Enter The Above Two Choice \3 \2\n");
            printf("thank you \2 \2 \2 \3 \3 \3\n");
            return 0;
        }
   break;
     float p,r,t,si; 
   case 8:
    printf("enter the principle(p)\nrate(r)\ntime(t)\n");
    scanf("%f %f %f",&p,&r,&t);
    printf("the principle is %f\nthe rate is %f\nthe time is %f\n",p,r,t);
    si=(p*r*t)/100;
    printf("and the si (%f * %f * %f)/100 = %f\n ",p,r,t,si);
     printf("Now Enter Your Choice :\n");
        printf("1.Next :\n2.Exit :\n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
            main(); // main function will repeat your program
            printf("1.next\n");
            break;
            case 2:
            exit(0); //exit 0 means now the compilation will not give you any result 
            printf("2.exit\n");
            break;
            default:
            printf("Sorry  Sir Please Enter The Above Two Choice \3 \2\n");
            printf("thank you \2 \2 \2 \3 \3 \3\n");
            return 0;
        }
        
        break;
        int leap();
        case 9:
    
 {
    int x;
    printf("enter the any year :");
    scanf("%d",&x);
    if(x%4==0) {
    printf("the year %d is leap year:\n",x);
    printf("and the day will be 366:\n");
    }
    else {
    printf("the year %d is not leap year\n",x);
    printf("and the days will be 365\n"); 
 }
    // getch();     k

    
     printf("Now Enter Your Choice :\n");
        printf("1.Next :\n2.Exit :\n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
            main(); // main function will repeat your program
            printf("1.next\n");
            break;
            case 2:
            exit(0); //exit 0 means now the compilation will not give you any result 
            printf("2.exit\n");
            break;
            default:
            printf("Sorry  Sir Please Enter The Above Two Choice \3 \2\n");
            printf("thank you \2 \2 \2 \3 \3 \3\n");
            return 0;
        }
        break;
        int temp();
         float c,f;
        case 10:
// {
//     temp();
//     getch();
// }
// int temp()
// {
   
    printf("enter the temperature in celcious");
    scanf("%f",&c);
    f=(c*9/5)+32;
    printf("temperature=%f degree fahrenheit:\n",f);
    printf("Now Enter Your Choice :\n");
        printf("1.Next :\n2.Exit :\n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
            main(); // main function will repeat your program
            printf("1.next\n");
            break;
            case 2:
            exit(0); //exit 0 means now the compilation will not give you any result 
            printf("2.exit\n");
            break;
            default:
            printf("Sorry  Sir Please Enter The Above Two Choice \3 \2\n");
            printf("thank you \2 \2 \2 \3 \3 \3\n");
            return 0;
        }
    getch();
}
        default:
        printf("sorry please enter the above given choice\n");
        printf("thank you \3\3\n");
    }
    
    getch();
}

