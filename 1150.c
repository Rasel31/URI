#include<stdio.h>
int main()
{
    int X, Z, b=0, c=0, i;

    scanf("%d", &X);

    for(;;)
    {
        scanf("%d", &Z);;
        if(Z>X)
            break;
    }

    for(i=X; b<Z; i++)
    {
        b+=i;
        c++;
    }

    printf("%d\n", c);

    return 0;
}
