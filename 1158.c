#include<stdio.h>
int main()
{
    int i, n, j, a, b, c, sum;

    scanf("%d", &n);

    for(i=1; i<=n; i++)
    {
        scanf("%d%d", &a, &b);

        sum=0;
        c=0;

        if(a%2 == 0)
        {
            for(j=a+1;; j+=2)
            {
                sum+=j;
                c++;
                if(c==b)
                    break;
            }
            printf("%d\n", sum);

        }
        else if(a%2 != 0)
        {

            for(j=a;;j+=2)
            {
                sum+=j;
                c++;
                if(c==b)
                    break;
            }
            printf("%d\n", sum);

        }
    }


    return 0;
}
