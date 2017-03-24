#include<stdio.h>
int main()
{
    int L, i, j;

    double M[12][12], sum= 0.0, avg=0.0;

    char T;

    scanf("%d", &L);

    scanf("%s", &T);


    for(i=0;i<12;i++){

        for(j=0;j<12;j++){

            scanf("%lf", &M[i][j]);

            if(i == L)
                sum += M[i][j];
        }

    }

    if(T == 'S'){

        printf("%.1lf\n", sum);
    }
    else if(T == 'M'){

        avg = sum/12;

        printf("%.1lf\n", avg);
    }


    return 0;

}
