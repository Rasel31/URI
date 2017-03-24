/*#include<stdio.h>
int main()
{
    double S=0, i, flag=1;

    for(i=1;i<=39;i=i+2)
    {
        S += i/flag;
        flag = flag + flag;
    }
    printf("%.2lf\n", S);


    return 0;
}*/

#include <stdio.h>
int main()
{
    double a,b=1,c, S=0;
    for(a=1; a<=39; a+=2)
    {
        c=a/b;
        S+=c;
        b*=2;
    }
    printf("%.2lf\n",S);
    return 0;
}
