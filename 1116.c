#include<stdio.h>
int main()
{
    int N, X, Y, i;
    double a;
    scanf("%d", &N);

    for(i=1;i<=N;i++)
    {
        scanf("%d %d", &X, &Y);

        if(Y==0)
            printf("divisao impossivel\n");
        else
        {
            a = X/(Y*1.00);
            printf("%.1lf\n", a);
        }



    }





    return 0;

}
