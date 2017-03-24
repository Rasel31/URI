#include<stdio.h>

int main()
{
    long long int  N,  first, second, last=0;

    int i, T, j;

    scanf("%d", &T);

    for(i=0; i<T; i++){

        scanf("%lld", &N);

        first = 0;

        second = 1;

        for(j=0; j<=N; j++){

            if(j<=1){

                last = j;

            }
            else
            {
                last = first + second;

                first = second;

                second = last;
            }
        }


        printf("Fib(%lld) = %lld\n", N, last);

    }

    return 0;

}
