#include<stdio.h>
 int add();
 int sub();

 int main()
 {
    int choice;
    printf("1.Add\n2.Sub\n");
    printf("Enter Operation 1/2 : ");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
       add();
        break;
    case 2:
       add();
        break;
    
    default:
    printf("Invalid");
        break;
    }

    return 0;

 }

 int add(){
    int a,b, sum;
    printf("Enter Any Two Number\n");
    scanf("%d%d",&a, &b);
     sum = a + b;

     printf("Sum =%d", sum);
 }

 int sub(){
     int a,b, sub;
    printf("Enter Any Two Number\n");
    scanf("%d%d",&a, &b);
     sub = a - b;

     printf("Sub =%d", sub);
 }