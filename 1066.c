#include<stdio.h>
int main()
{
    int a[10], i, flag =0, flag1 =0, flag2=0, flag3=0;

    for(i=0;i<5;i++)
        scanf("%d", &a[i]);

    for(i=0;i<5;i++)
    {
        if(a[i]%2 == 0)
            flag++;
        else if(a[i]%2 != 0)
            flag1++;
    }
    for(i=0;i<5;i++)
    {
         if(a[i]>0)
            flag2++;
        else if(a[i]<0)
            flag3++;
    }
    printf("%d\n", flag);
    printf("%d\n", flag1);
    printf("%d\n", flag2);
    printf("%d\n", flag3);


    return 0;
}
