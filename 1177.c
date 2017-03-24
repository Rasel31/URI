#include<stdio.h>
int main()
{
    int N[1000], T, i=0, j=0;

    scanf("%d", &T);

    while(i<1000){

        N[i] = j;

        printf("N[%d] = %d\n", i, j);

        i++;
        j++;

        if(j>=T)
            j=0;
    }


    return 0;

}
