#include<stdio.h>

int main()
{
    int N[10], i, X;

    scanf("%d", &X);

    for(i=0; i<10; i++, X = X*2){

        N[i] = X;
    }

    for(i=0; i<10; i++){

        printf("N[%d] = %d\n", i, N[i]);
    }




    return 0;
}
