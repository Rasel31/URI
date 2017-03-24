#include<stdio.h>
int main()
{
    int M, N;

    for(;;)
    {
        scanf("%d %d", &M, &N);

        if(M==N)
            break;

        else if(M>N)
        {
            printf("Decrescente\n");
        }
        else if(N>M)
        {
            printf("Crescente\n");
        }


    }


    return 0;
}
