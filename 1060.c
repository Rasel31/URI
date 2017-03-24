#include<stdio.h>
int main()
{
    double a[10];

    int i, flag=0 ;

    for(i=1;i<=6;i++)
    {
        scanf("%lf", &a[i]);
    }

    for(i=1;i<=6;i++)
    {
        if(a[i] > 0.00)
            flag++;
    }

    printf("%d valores positivos\n", flag);



    return 0;
}
