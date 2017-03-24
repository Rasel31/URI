#include<stdio.h>
int main()
{
    double a, b, c=0, d=0, e;

    for(;;)
    {
        if(d==2)
            break;

        scanf("%lf", &a);

        if(a>=0 && a<=10)
        {
            d++;
            c+=a;
        }
        else
            printf("nota invalida\n");
    }
        e = c/2;



    printf("media = %.2lf\n", e);





    return 0;

}
