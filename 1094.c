#include<stdio.h>
int main()
{
    int N, i;
    double avg1, avg2, avg3, total, c=0.00, d=0.00, e=0.00, a;
    char b;

    scanf("%d", &N);

    for(i=0;i<N;i++)
    {
        scanf("%lf %c", &a, &b);
        if(b== 'C')
        {
            c = c+a;
        }
        else if(b=='R')
        {
            d = d+a;
        }
        else if(b=='S')
        {
            e = e+a;
        }

    }
    total = c+d+e;
    avg1 = (c/total)*100.00;
    avg2 = (d/total)*100.00;
    avg3 = (e/total)*100.00;
    printf("Total: %.0lf cobaias\n",total);
    printf("Total de coelhos: %.0lf\n",c);
    printf("Total de ratos: %.0lf\n",d);
    printf("Total de sapos: %.0lf\n",e);
    printf("Percentual de coelhos: %.2lf %%\n",avg1);
    printf("Percentual de ratos: %.2lf %%\n",avg2);
    printf("Percentual de sapos: %.2lf %%\n",avg3);



    return 0;
}

