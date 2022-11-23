#include<stdio.h>
void display();
int main()
{
    int a;
    printf("initialzitiong display function\n");
    display(); //function call
    printf("display function finished its work\n");
    return 0;    
}

//function defination
void display(){
    printf("this is display\n");
}
