#include<stdio.h>
int main()
{
    int N, X, i;

    scanf("%d", &N);

    for(i=1;i<=N;i++)
    {
        scanf("%d", &X);

        if(X== 0)
            printf("NULL\n");
        else if(X>0)
        {
            if(X%2==0)
            printf("EVEN POSITIVE\n");
        else
            printf("ODD POSITIVE\n");
        }
        else if(X<0)
        {
            if(X%2==0)
            printf("EVEN NEGATIVE\n");
        else
            printf("ODD NEGATIVE\n");
        }

    }


    return 0;
}
