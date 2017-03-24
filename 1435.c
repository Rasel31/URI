#include<stdio.h>

int main()

{
    int M[100][100], i, j, a, b=1 ;

    for(;;){

        scanf("%d", &a);

        if(a==0)

            break;

        for(i=0; i<a; i++){

            for(j=0; j<a; j++){

                M[i][j] = 1;
            }
        }

        for(i=0; i<a; i++){

            for(j=0; j<a; j++){

                printf("%3d", M[i][j]);
            }
            printf("\n");
        }



    }


    return 0;
}


