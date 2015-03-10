#include <stdio.h>

double abs(double a)
{
    return (a<0)? -a: a;
}

double aprox_integral(double n, double cte)
{
    int sinal = 1, i;
    double r = 0, termo;
    double cima = n, baixo = 1;

    do{

        termo = sinal*(cima/baixo);
        cima *=n;
        baixo++;
        r += termo;
        sinal *= -1;
        printf("%lf\n", termo);
        i++;
    } while(i< 3);/*while(abs(termo) - cte > 0);*/

    return r*(n+1)-n;
}

int main()
{
    printf("%lf", aprox_integral(2, 0.01));
    return 0;
}
