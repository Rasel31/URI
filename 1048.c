#include<stdio.h>
int main()
{
    double a, b, c;
    int d;
    char ch='%';

    scanf("%lf", &a);

    if(a >= 0 && a <= 400.00)
    {
        b = (a*0.15)+a;
        c = b-a;
        d=15;
        printf("Novo salario: %.2lf\n", b);
        printf("Reajuste ganho: %.2lf\n", c);
        printf("Em percentual: %d %c\n",d,ch);
    }
    else if(a >= 400.01 && a <= 800.00)
     {
        b = (a*0.12)+a;
        c = b-a;
        d=12;
        printf("Novo salario: %.2lf\n", b);
        printf("Reajuste ganho: %.2lf\n", c);
        printf("Em percentual: %d %c\n",d,ch);
    }
    else if(a >= 800.01 && a <= 1200.00)
     {
        b = (a*0.1)+a;
        c = b-a;
        d=10;
        printf("Novo salario: %.2lf\n", b);
        printf("Reajuste ganho: %.2lf\n", c);
        printf("Em percentual: %d %c\n",d,ch);
    }
    else if(a >= 1200.01 && a <= 2000.00)
     {
        b = (a*0.07)+a;
        c = b-a;
        d=7;
        printf("Novo salario: %.2lf\n", b);
        printf("Reajuste ganho: %.2lf\n", c);
        printf("Em percentual: %d %c\n",d,ch);
    }
    else if(a > 2000)
     {
        b = (a*0.04)+a;
        c = b-a;
        d=4;
        printf("Novo salario: %.2lf\n", b);
        printf("Reajuste ganho: %.2lf\n", c);
        printf("Em percentual: %d %c\n",d,ch);
    }


    return 0;

}
