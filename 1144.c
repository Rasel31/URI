#include<stdio.h>
int main()
{
    int N, i, a, b;

    scanf("%d", &N);

    for(i=1;i<=N;i++)
    {
        if(i==1)
        {
            printf("%d ", i);
            printf("%d ", i);
            printf("%d\n", i);

            printf("%d ", i);
            printf("%d ", i+1);
            printf("%d\n", i+1);
        }
        else{
        printf("%d ", i);
        a=i*i;
        printf("%d ", a);
        b=i*i*i;
        printf("%d\n", b);

        printf("%d ", i);
        printf("%d ", a+1);
        printf("%d\n", b+1);
        }
    }


    return 0;
}
