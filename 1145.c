#include<stdio.h>
int main()
{
    unsigned long int y;
    int i,x;
    scanf("%d%d",&x,&y);
    for(i=1 ; i<=y ; i++)
    {
        printf("%d",i);
        if(i%x!=0){
                printf(" ");
        }
        else if(i%x==0)
        {
            printf("\n");
        }
    }
    return 0;
}
/*#include<stdio.h>
int main()
{
    int X, Y, i;

    scanf("%d%d", &X, &Y);

    for(i=1;i<=Y-2;i++)
    {
        printf("%d ", i);
        printf("%d ", ++i);
        printf("%d\n", ++i);

    }

    return 0;


}
*/
/*
#include <stdio.h>
int main()
{
    int X,Y,z,a,b=0;
    scanf("%d%d", &X,&Y);
    for(a=1; a<=Y; a++)
    {
        b++;
        if(b==X) printf("%d",a);
        else printf("%d ", a);
        if(b==X)
        {
            b=0;
            printf("\n");
        }
    }
    return 0;
}
*/
