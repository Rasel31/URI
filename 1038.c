#include<stdio.h>
int main()
{
    int X, Y;
    float Z;

    scanf("%d %d", &X, &Y);

    if(X==1)
        printf("Total: R$ %.2f\n", Z=Y*4);
    else if(X==2)
        printf("Total: R$ %.2f\n", Z=Y*4.50);
    else if(X==3)
        printf("Total: R$ %.2f\n", Z=Y*5);
    else if(X==4)
        printf("Total: R$ %.2f\n", Z=Y*2);
    else if(X==5)
        printf("Total: R$ %.2f\n", Z=Y*1.50);

        return 0;
}
