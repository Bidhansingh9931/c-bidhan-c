#include<stdio.h>
#include<conio.h>
float add(float, float);
float sub(float, float);
float mul(float, float);
float div(float, float);
int mod(int, int);

void main()
{
    int n1,n2;

    printf("Enter Two Number\n");
    scanf("%d%d",&n1,&n2);

    add(n1, n2);
    printf("Add = %f\n",add(n1, n2));

    sub(n1, n2);
    printf("Sub = %f\n",sub(n1, n2));

    mul(n1, n2);
    printf("Mul = %f\n",mul(n1, n2));

    div(n1, n2);
    printf("Div = %f\n",div(n1, n2));

    mod(n1, n2);
    printf("Modulo = %d\n",mod(n1, n2));


    return 0;


}

// sum
float add(float x, float y)
{
    return(x+y);
}

// sub
float sub(float x, float y)
{
    return(x-y);
}

// mul
float mul(float x, float y)
{
    return(x*y);
}

// div
float div(float x, float y)
{
    return(x/y);
}

// mod
int mod(int x, int y)
{
    return(x%y);
}