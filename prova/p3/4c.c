#include <stdio.h>
#include <math.h>

#define TAM 100

void ler_frase(char frase[])
{
    scanf("%s", frase);
}

int tamanho_frase(char frase[])
{
    int i;
    for(i = 0; frase[i]!= '\0'; i++) ;
    return i;
}

void preencher_matriz(char frase[], char matriz[TAM][TAM], int n)
{
    int i, j, k = 0;
    for(i = 0; i < n; i++)
        for(j = 0; j < n; j++)
            matriz[i][j] = (char) 'a' + (rand() % ('z'-'a'));

    for(i = 0; i < n; i++) matriz[i][i] = frase[k++];
    for(i = 0; i < n; i++) matriz[i][n-i-1] = frase[k++];

}

void mostrar_matriz(char matriz[TAM][TAM], int m, int n)
{
    int i, j;
    for(i = 0; i < n; i++)    {
        for(j = 0; j < n; j++)
            printf("%c ", matriz[i][j]);
        printf("\n");
    }
}

void mostrar_matriz_em_linha(char matriz[TAM][TAM], int m, int n)
{
    int i, j;
    printf("\n");
    for(i = 0; i < n; i++)
        for(j = 0; j < n; j++)
            printf("%c", matriz[i][j]);
    printf("\n");

}


void mostrar_mensagem(char matriz[TAM][TAM], int n)
{
    int i;

    for(i = 0; i < n; i++) printf("%c", matriz[i][i]);

    for(i = 0; i < n; i++) printf("%c", matriz[i][n-i-1]);
}

int main()
{
    char matriz[TAM][TAM];
    char frase[TAM*TAM];
    int n, m;

    ler_frase(frase);

    n = tamanho_frase(frase);
    m = (n+1)/2;

    preencher_matriz(frase, matriz, m);

    mostrar_matriz(matriz, m, m);
    mostrar_mensagem(matriz, m);
    mostrar_matriz_em_linha(matriz, n, m);

    return 0;
}
