#include<stdio.h>
int main()
{
    double a, b=0, X=0, e;
    int d;

    for(;;)
    {
        scanf("%lf", &a);

        if(a>=0 && a<=10)
        {
            b+=a;
            X++;
        }
        else
            printf("nota invalida\n");


        if(X==2)
        {
            e = b/2;
            printf("media = %.2lf\n", e);
            X=0;
            b=0;

            while(1)
            {
                printf("novo calculo (1-sim 2-nao)\n");
                scanf("%d", &d);

                if((d==1) || (d==2))
                    break;
            }

            if(d==1)
                continue;
            else
                break;

        }
    }


    return 0;

}
