#include<stdio.h>
int main()
{
    int a, b=0, c=0, i;

    scanf("%d", &a);

    for(i=1;i<=a;i++)
    {
        if(i==1){
        printf("%d ", ++c);
        c++;
        printf("%d ", c);
        c++;
        printf("%d PUM\n", c);

        b=c+2;
        }
        else{

        printf("%d ", b);
        b++;
        printf("%d ", b);
        b++;
        printf("%d PUM\n", b);
        b+=2;

        }
    }


    return 0;
}
