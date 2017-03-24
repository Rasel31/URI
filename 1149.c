#include<stdio.h>
int main()
{
    int x, N, b=0, i;

    scanf("%d %d", &x, &N);

    while(N<=0)
        scanf("%d", &N);

    for(i=1; i<=N; i++)
    {
        b+=x;
        x++;
    }

    printf("%d\n", b);

    return 0;
}
