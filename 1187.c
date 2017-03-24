#include<stdio.h>

int main()
{
    double M[12][12], sum =0, k=0;

    int i, j;

    char O;

    scanf("%c", &O);

    for(i=0; i<4; i++){

        for(j =0; j<4; j++){

            if(i>j && i>4-j-1){

                scanf("%lf", &M[i][j]);

                sum += M[i][j];

                k++;
            }

            else{
                scanf("%lf", &M[i][j]);
            }
        }
    }

    if(O=='S'){

        printf("%.1lf\n", sum);
    }
    else if(O=='M'){

        printf("%.1lf\n", sum/k);
    }


    return 0;


}
