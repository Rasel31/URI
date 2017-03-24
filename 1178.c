#include<stdio.h>
int main()
{
    double N[100], i,  X, div;

    scanf("%lf", &X);

    div = X;

    for(i=0; i<100; i++){

        printf("N[%.0lf] = %.4lf\n", i, div);

        div /=2;
    }


    return 0;
}
