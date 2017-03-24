#include<stdio.h>
int main()
{
    int a , i, flag=0;
    scanf("%d", &a);

    for(;;)
    {
        if(a%2 != 0){
            printf("%d\n", a);
            flag++;
        }
        a++;

        if(flag==6)
            break;
    }


    return 0;
}
