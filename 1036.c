#include<stdio.h>
#include<math.h>
int main()
{
    double A, B, C, d, R1, R2;

    scanf("%lf %lf %lf", &A, &B, &C);

    d = sqrt(pow(B,2)-(4*A*C));

    R1 = ((-B) + d)/(2*A);

    R2 = ((-B) - d)/(2*A);

    if(A!=0 && d>0)
    {
        printf("R1 = %.5lf\nR2 = %.5lf\n", R1, R2);
    }
    else
    {
        printf("Impossivel calcular\n");
    }


    return 0;


}
