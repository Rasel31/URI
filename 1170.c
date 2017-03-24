#include<stdio.h>
int main()
{
    float  X;
    int N, flag, i;

    scanf("%d", &N);

    for(i=1; i<=N; i++){

        scanf("%f", &X);

        flag=0;

        while(X > 1){

            X/=2;

            flag++;
        }


        printf("%d dias\n", flag);
    }

    return 0;
}
