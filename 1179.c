#include<stdio.h>

int main()
{
    int a[15], b[15], c[15], i, j=0, k=0;

    for(i=0; i<15; i++){

        scanf("%d", &a[i]);

    }

    for(i=0; i<15; i++)
    {
        if(a[i]%2 == 0)
        {
                b[i] = a[i];

                j++;

        }
        else if(a[i]%2 != 0)
        {
                c[i] = a[i];

                k++;
        }
    }

    for(i=0;i<j;i++)
    {
        printf("par[%d] = %d\n", i, b[i]);
    }

    for(i=0; i<k; i++)
    {
        printf("impar[%d] = %d\n", i, c[i]);
    }

    for(i=5;i<k;i++)
    {
        printf("impar[%d] = %d\n", i-5, c[i]);
    }

    for(i=5;i<j;i++)
    {
        printf("par[%d] = %d\n", i-5, b[i]);
    }


}
