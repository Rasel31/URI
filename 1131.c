#include<stdio.h>
int main()
{
    int a, b, c=0, d=0, e=0, f;
    int g=0;
    for(;;)
    {
        scanf("%d %d", &a, &b);
        if(a>b)
           c++;

         if(b>a)
            d++;

        if(a==b)
            e++;

        g++;
        printf("Novo grenal (1-sim 2-nao)\n");
        scanf("%d", &f);
        if(f==1)
            continue;
        else if(f==2)
            break;
    }

    printf("%d grenais\n", g);
    printf("Inter:%d\n", c);
    printf("Gremio:%d\n", d);
    printf("Empates:%d\n", e);
    if(c>d)
        printf("Inter venceu mais\n");
    else
        printf("Nao houve vencedor\n");



    return 0;

}
