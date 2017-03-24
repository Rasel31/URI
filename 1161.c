#include<stdio.h>
int main()
{
    long long int M, N, i, sum, sum1 ;

    while(scanf("%lld%lld", &M, &N) != EOF){

            sum =1, sum1 =1;

            if(M == 0){
                sum = 1;
            }
            else if(M>0){
                    for(i=1; i<=M; i++){

                        sum *= i;
                }
            }

             if(N == 0){
                sum1 = 1;
            }
            else if(N>0){
                    for(i=1; i<=N; i++){

                        sum1 *= i;
                }
            }

            printf("%lld\n", sum+sum1);

    }

    return 0;
}
