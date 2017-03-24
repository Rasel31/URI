#include<stdio.h>
int main()
{
    double arr[3];
    double A, B, C, k;
    int i, j;

    scanf("%lf%lf%lf", &arr[0], &arr[1], &arr[2]);

    for(i=0;i<3;i++)
        for(j=i+1;j<3;j++)
    {
        if (arr[i]<arr[j])
        {
            k = arr[j];
            arr[j] = arr[i];
            arr[i]= k;
        }
    }
    A = arr[0];
    B = arr[1];
    C = arr[2];

    if(A >= (B+C))
        printf("NAO FORMA TRIANGULO\n");
    else if((A*A) == ((B*B)+(C*C)))
        printf("TRIANGULO RETANGULO\n");
    else if((A*A) > ((B*B)+(C*C)))
        printf("TRIANGULO OBTUSANGULO\n");
    else if((A*A) < ((B*B)+(C*C)))
        printf("TRIANGULO ACUTANGULO\n");


    if(A==B && A==C && B==C)
        printf("TRIANGULO EQUILATERO\n");
    else if(B==C || A==C || A==B)
        printf("TRIANGULO ISOSCELES\n");



    return 0;

}
