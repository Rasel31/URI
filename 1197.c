#include<stdio.h>
int main()
{
    int s, v, t;

    while(scanf("%d%d", &v, &t) != EOF){

        s = 2 * v * t;

        printf("%d\n", s);
    }

    return 0;
}
