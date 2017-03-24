#include<stdio.h>
int main()
{
    int N,X,i,flag=0,flag1=0;

    scanf("%d", &N);

    for(i=0;i<N;i++)
    {
        scanf("%d", &X);

        if(X>=10 && X<=20)
            flag++;
        else
            flag1++;
    }
    printf("%d in\n", flag);
    printf("%d out\n", flag1);


    return 0;
}
