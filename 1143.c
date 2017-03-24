#include<stdio.h>
int main()
{
    int N, i;
    scanf("%d", &N);

    for(i=1;i<=N;i++)
    {
        if(i==1)
        {
            printf("%d ", i);
            printf("%d ", i);
            printf("%d\n", i);
        }
        else
        {

            printf("%d ", i);
            printf("%d ", i*i);
            printf("%d\n", i*i*i);

        }

    }


    return 0;
}
