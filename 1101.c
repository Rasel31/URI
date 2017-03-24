#include<stdio.h>
int main()
{
    int M, N, i, flag=0;

    for(;;)
    {
        scanf("%d %d", &M, &N);

        if(M <=0 || N <= 0)
            break;

        else if(M>N)
        {
            flag= 0;
            for(i=N;i<=M;i++)
            {
                flag+=i;
                printf("%d ", i);
            }
            printf("Sum=%d",flag);
            printf("\n");
        }
        else if(N>M)
        {
            flag= 0;
            for(i=M;i<=N;i++)
            {
                flag+=i;
                printf("%d ", i);
            }
            printf("Sum=%d",flag);
            printf("\n");
        }


    }


    return 0;
}
