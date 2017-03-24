#include<stdio.h>
int main()
{
    int i, X, j, a, c, sum;


    for(;;)
    {
        scanf("%d", &X);

        if(X==0)
            break;

        sum=0;
        c=0;

        if(X%2 == 0)
        {
            for(j=X;; j+=2)
            {
                sum+=j;
                c++;
                if(c==5)
                    break;
            }
            printf("%d\n", sum);

        }
        else if(X%2 != 0)
        {

            for(j=X+1;;j+=2)
            {
                sum+=j;
                c++;
                if(c==5)
                    break;
            }
            printf("%d\n", sum);

        }
    }


    return 0;
}
