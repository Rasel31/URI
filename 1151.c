#include<stdio.h>
int main()
{
    int n, i, first =0, last =0, sum=0;

    scanf("%d", &n);

    for(i=0; i<=n; i++)
    {
        if(i<=1)
        {
            sum = first + last;
            first = last;
            last = sum;
        }
        else
        {
            sum = first + last;
            first = last;
            last = sum;
        }

        if(i==n)
            printf("%d\n", sum);
        else
            printf("%d ", sum);
    }

    return 0;
}
