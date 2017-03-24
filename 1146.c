#include<stdio.h>
int main()
{
    int X, i;

    for(;;){
    scanf("%d", &X);

    if(X==0)
        break;
    else{

        for(i=1; i<=X; i++)
        {
            if(i==X)
                printf("%d", i);
                else
                    printf("%d ",i);

        }
    }
    printf("\n");
    }

    return 0;
}
