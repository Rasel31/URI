#include<stdio.h>
int main()
{
    int a, i, k, large=0;

    for(i=1;i<=100;i++){
        scanf("%d", &a);
        if(a>large)
        {
            large = a;
            k =i;
        }
    }
    printf("%d\n", large);
    printf("%d\n", k);




    return 0;
}

