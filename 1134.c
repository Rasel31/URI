#include<stdio.h>
int main()
{
    int a, d=0, e=0, f=0;

    for(;;)
    {
        scanf("%d", &a);

        if(a==4)
            break;
        else if(a==1)
            d++;
        else if(a==2)
            e++;
        else if(a==3)
            f++;


    }
    printf("MUITO OBRIGADO\n");
    printf("Alcool: %d\n", d);
    printf("Gasolina: %d\n", e);
    printf("Diesel: %d\n", f);


    return 0;
}
