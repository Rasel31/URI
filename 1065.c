#include<stdio.h>
int main()
{
    int a[10];

    int i, flag=0 ;

    for(i=0;i<5;i++)
    {
        scanf("%d", &a[i]);
    }

    for(i=0;i<5;i++)
    {
        if(a[i]%2 == 0)
            flag++;
    }

    printf("%d valores pares\n", flag);



    return 0;
}
