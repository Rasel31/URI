#include<stdio.h>
int main()
{
    int i, j=1;

    for(i=60;i>=0;i-=5)
    {
        printf("I=%d J=%d\n",j,i);
        j+=3;
    }



    return 0;
}

