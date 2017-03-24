#include<stdio.h>
int main()
{
    double a[10], rasel = 0.00, flag=0.00;

    int i  ;

    for(i=1;i<=6;i++)
    {
        scanf("%lf", &a[i]);
    }

    for(i=1;i<=6;i++)
    {
        if(a[i] > 0.00){
            rasel = rasel + a[i];
            flag++;
        }
    }

    rasel = rasel/flag;

    printf("%.0lf valores positivos\n", flag);

    printf("%.1lf\n", rasel);



    return 0;
}
