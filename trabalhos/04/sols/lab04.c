#include <stdio.h>

#define N 500
#define VALIDO 0
#define ELIMINADO 1

void atribuir_valor_vetor_inteiros(int v[], int n, int valor)
{
    int j;
    for(j = 0; j < n; j++) v[j] = valor;
}

int proximo_cadidato_valido(int inicio, int candidatos[], int n)
{
    /* Desconsidera todos os candidatos que já foram eliminados
       e procura pelo proximo canditato válido*/
    while(candidatos[inicio%n] == ELIMINADO)
        inicio++;
    return inicio%n;
}

/*
 * Descrição: Esta função
 *
 * Entrada: Três números inteiros
 * inicio corresponde
 * m corresponde a quantidade de candidatos no início da eleicao
 * n corresponde a quantidade de candidatos validos em cada
 *   chamada recursiva.
 *
 * Saída: (não há).
*/
void eleicao(int inicio, int m, int n, int candidatos[])
{
    if(n > 1) {
        inicio = proximo_cadidato_valido(1 + \
                 proximo_cadidato_valido(inicio, candidatos, m), \
                                       candidatos, m);

        /* Neste ponto, inicio corresponde ao segundo candidato válido*/
        candidatos[inicio] = ELIMINADO;
        eleicao(inicio+1, m, n-1, candidatos);
    }
}

int cacique(int candidatos[], int n)
{
    /* Inicialmente, todos os candidatos são válidos*/
    atribuir_valor_vetor_inteiros(candidatos, n, VALIDO);
    eleicao(0, n, n, candidatos);

    /*Como neste ponto há apenas um cadidato concorrendo,
    pode-se simplesmente devolver o índice do próximo
    candidato válido.*/
    return proximo_cadidato_valido(0, candidatos, n);
}

int main()
{
    int n, candidatos[N];

    scanf("%d", &n);
    printf("Novo Cacique: %d.\n", 1 + cacique(candidatos, n));

    return 0;
}
