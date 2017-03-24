#include<stdio.h>
int main()
{
    float N1, N2, N3, N4, a, b, c;

    scanf("%f %f %f %f", &N1, &N2, &N3, &N4);

    a = ((N1*2)+(N2*3)+(N3*4)+(N4))/10;

    printf("Media: %.1f\n",a);

    if(a>=7.00)
        printf("Aluno aprovado.\n");
    else if(a<5.00)
        printf("Aluno reprovado.\n");

    else if(a>=5.00 && a<=6.9){

        printf("Aluno em exame.\n");

        scanf("%f", &b);

        printf("Nota do exame: %.1f\n", b);

        c = (a+b)/2;

        if(c>=5)
            printf("Aluno aprovado.\n");

        else if(c<=4.9)
            printf("Aluno reprovado.\n");

        printf("Media final: %.1f\n",c);
    }


    return 0;


}
