#include <stdio.h>
#include <math.h>

#define TAM 100

int tamanho_frase(char frase[]);
void preencher_matriz(char frase[], char matriz[TAM][TAM], int n);
void mostrar_mensagem(char matriz[TAM][TAM], int n);

int main()
{
    char matriz[TAM][TAM];
    char frase[TAM*TAM];
    int n;

    scanf("%s", frase);
    n = sqrt(tamanho_frase(frase));
    preencher_matriz(frase, matriz, n);
    mostrar_mensagem(matriz, n);

    return 0;
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
            matriz[i][j] = frase[k++];
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

void mostrar_mensagem(char matriz[TAM][TAM], int n)
{
    int i;

    for(i = 0; i < n; i++) printf("%c", matriz[i][i]);

    for(i = 0; i < n; i++) printf("%c", matriz[i][n-i-1]);
}
