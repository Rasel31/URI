#include<stdio.h>
int main()
{
    int N, X, i, j, flag;

    scanf("%d", &N);

    for(i=1; i<=N; i++){

        scanf("%d", &X);

        flag = 0;

        for(j=2; j<X; j++){

            if(X%j == 0){

                flag++;

                break;
            }
        }

        if(flag == 1)

            printf("%d nao eh primo\n", X);

        else

            printf("%d eh primo\n", X);
    }



    return 0;
}
