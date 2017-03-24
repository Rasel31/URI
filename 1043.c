#include<stdio.h>
int main()
{
    float a, b, c, d;

    scanf("%f %f %f", &a, &b, &c);

    if(a<b+c && b<a+c && c<a+c)
        printf("Perimetro = %.1f\n", a+b+c);
    else
    {
        d = 0.5*(a+b)*c;
        printf("Area = %.1f\n", d);
    }


    return 0;
}
