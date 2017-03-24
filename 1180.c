#include<stdio.h>
int main()
{
    int N, X[1000], i, c=0 ;

    scanf("%d", &N);

    for(i=0; i<N; i++){

        scanf("%d", &X[i]);
    }

    for(i=1;i<N;i++){

            if(X[0]>X[i]){

                X[0] = X[i];
            }
    }
    printf("Menor valor: %d\n", X[0]);

    for(i=1;i<N;i++)
    {
        if(X[0] == X[i])
            c = i;
    }

    printf("Posicao: %d\n", c);

}

