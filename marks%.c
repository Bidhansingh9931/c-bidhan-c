 #include<stdio.h>
 int main()
 {
    float p, c, m, e, h, per;
    char grade;
    printf("enter your five subject marks\n");
    printf("1.physics\n2.chemestry\n3.math\n4.english\n5.hindi\n");
    scanf("%f %f %f %f %f",&p,&c,&m,&e,&h);

    per=(p+c+m+e+h)*100/500;

    if(per>=85){
        printf("grade=%c",'a');
    }

    else if(per>=70&&per<=85){
        printf("grade=%c",'b');
    }

    else if(per>=55&&per<=70){
        printf("grade=%c",'c');
    }
    else if(per>=40&&per<=55){
        printf("grade=%c",'d');
        }
    else{
    printf("grade=%c",'r');
    }
    return 0;
           
 }