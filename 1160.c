#include<stdio.h>

int main()
{
    int n, i, PA, PB, d, c;

    double G1, G2;

    scanf("%d", &n);

    for(i=1; i<=n; i++)
    {
        scanf("%d %d %lf %lf", &PA, &PB, &G1, &G2);

        c = 0;
        d = 0;

        while(PA <= PB)
        {

            PA += PA * (G1/100);

            PB += PB * (G2/100);

            c++;

            if(c > 100)
            {
                    d = 1;
                    break;
            }
        }

        if(d == 1)
            printf("Mais de 1 seculo.\n");
        else
            printf("%d anos.\n", c);
    }



    return 0;
}
