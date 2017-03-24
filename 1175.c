#include<stdio.h>

int main()
{
    int N[20];

    int i, j;

    for(i=0; i<20; i++){

        scanf("%d", &N[i]);
    }

    for(i=20-1, j=0; i>=0, j<20; i--, j++){

            printf("N[%d] = %d\n", j, N[i]);
    }


    return 0;
}
