#include<stdio.h>
int main()
{
    int num, yr, month, d;

    scanf("%d", &num);

    yr = num/365;

    month = (num % 365)/ 30;
    d = (num % 365)% 30;

    printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n", yr, month, d);


    return 0;

}
