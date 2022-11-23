#include<stdio.h>
int main()
{
    float m,cm,km,feet;
        printf("enter the distance in km ");
            scanf("%f",&km);
                m=km*1000;
                    cm=m*100;
                feet=cm*2.56;
            printf("temperature\n=m:-%f\ncm:- %f\nfeet:- %f\n",m,cm,feet);
        return 0;

}