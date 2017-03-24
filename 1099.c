#include<stdio.h>
int main()
{
    int N, i, j, X, Y, flag=0;


    scanf("%d", &N);

    for(i=1; i<=N; i++)
    {
        scanf("%d %d", &X, &Y);

        if(X==Y){
            flag=0;
            printf("%d\n", flag);

        }

        else if(X>Y)
        {
           for(j=Y+1, flag=0;j<X;j++)
            {
                if((j%2) != 0)
                {
                    flag = flag +j;
                }
            }
            printf("%d\n", flag);
        }
        else if(X<Y)
        {
            for(j=X+1, flag=0;j<Y;j++)
            {
                if((j%2) != 0)
                {
                    flag = flag +j;
                }
            }
            printf("%d\n", flag);
        }

    }




    return 0;
}
