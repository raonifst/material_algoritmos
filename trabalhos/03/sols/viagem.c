#include <stdio.h>

#define N 99
#define K 100

void mostrar_cidades(int cidades[], int c)
{
    int i;

    printf("Cidades: ");
    for(i = 0; i < c-1; i++)
        printf("%d, ", cidades[i]);
    printf("%d.\n", cidades[c-1]);

}

int procurar_cidades(float M[N][K], int n, int k, float  l, int cidades[])
{
    int i, j, c = 0;

    for(i = 0; i < n; i++)
    {
        for(j = 0; j < k && M[i][j] > l; j++) ;
        if( j < k ) cidades[c++] = i + 1;
    }

    return c;
}

int main()
{
    float M[N][K], l;
    int n, k, i, j;
    int cidades[N], c;

    scanf("%d %d %f", &n, &k, &l);

    for(i = 0; i < n; i++)
        for(j = 0; j < k; j++)
            scanf("%f", &M[i][j]);

    c = procurar_cidades(M, n, k, l, cidades);

    if(c > 0)
        mostrar_cidades(cidades, c);
    else
        printf("Nao ha cidades.\n");

    return 0;
}
