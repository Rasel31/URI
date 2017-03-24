#include<stdio.h>
int main()
{
    int X, Y, i, a=0;

    scanf("%d %d", &X, &Y);

    if(X>Y)
    {
        for(i=Y;i<=X;i++)
        {
            if((i%13) != 0)
                a+=i;
        }
        printf("%d\n", a);
    }
    else if(X<Y)
    {
        for(i=X;i<=Y;i++)
        {
            if((i%13) != 0)
                a+=i;
        }
        printf("%d\n", a);
    }

    return 0;

}
