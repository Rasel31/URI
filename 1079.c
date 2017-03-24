#include<stdio.h>
int main()
{
    double a, b, c, d;
    int N,i;

    scanf("%d", &N);

    for(i=0;i<N;i++)
    {
        scanf("%lf%lf%lf", &a, &b, &c);
        d=((a*2)+(b*3)+(c*5))/10.00;
        printf("%.1lf\n",d);
    }




    return 0;
}

