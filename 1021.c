#include<stdio.h>
#include<math.h>
int main()
{
    double num, A ;

    int N, M, a, b, c, d, e, f, g, h, i, j, k, l, m, n, o, p, q, r, s, t, u, v;

    scanf("%lf", &num);

    N = (int) num;
    a = N/100;
    b = N%100;

    c = b/50;
    d = b%50;

    e = d/20;
    f = d%20;

    g = f/10;
    h = f%10;

    i = h/5;
    j = h%5;

    k = j/2;
    l = j%2;


    printf("NOTAS:\n");
    printf("%d nota(s) de R$ 100.00\n", a);
    printf("%d nota(s) de R$ 50.00\n", c);
    printf("%d nota(s) de R$ 20.00\n", e);
    printf("%d nota(s) de R$ 10.00\n", g);
    printf("%d nota(s) de R$ 5.00\n", i);
    printf("%d nota(s) de R$ 2.00\n", k);

    A = num * 100;
    M = (int) A;

    m = M/100;
    n = M%100;

    o = n/50;
    p = n%50;

    q = p/25;
    r = p%25;

    s= r/10;
    t = r%10;

    u =t/5;
    v = t%5;

    printf("MOEDAS:\n");
    printf("%d moeda(s) de R$ 1.00\n", l);
    printf("%d moeda(s) de R$ 0.50\n", o);
    printf("%d moeda(s) de R$ 0.25\n", q);
    printf("%d moeda(s) de R$ 0.10\n", s);
    printf("%d moeda(s) de R$ 0.05\n", u);
    printf("%d moeda(s) de R$ 0.01\n", v);

    return 0;
}
