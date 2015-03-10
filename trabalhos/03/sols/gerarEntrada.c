#include <stdio.h>

#define N 99
#define K 100

void matrizAleatoria(float M[N][K], int n, int k, float l)
{
    int i, j;
    srand(time(NULL));
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < k; j++)
        {
            M[i][j] = l/1.2 + rand() % (int)l + ((rand()%3)+0.0)/3;
        }
    }

}

void mostraMatriz(float M[N][K], int n, int k)
{
    int i, j;

    for(i = 0; i < n; i++)
    {
        for(j = 0; j < k; j++)
            printf("%.2f ", M[i][j]);
        printf("\n");
    }

}

int main()
{
    int n, k;
    float M[N][K], l;

    scanf("%d %d %f", &n, &k, &l);

    matrizAleatoria(M, n, k, l);
    printf("%d %d %.2f\n", n, k, l);
    mostraMatriz(M, n, k);

    return 0;
}
