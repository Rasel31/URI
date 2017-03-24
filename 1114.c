#include<stdio.h>
int main()
{
    int M;

    for(;;)
    {
        scanf("%d", &M);

        if(M==2002){
            printf("Acesso Permitido\n");
            break;
        }
        else
            printf("Senha Invalida\n");



    }


    return 0;
}
