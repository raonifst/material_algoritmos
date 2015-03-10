/*
 *      90000002 - 2014/2
 *      Laboratório 04
 *
 *      Nome: < nome do aluno >
 *      RGA: < RGA do aluno >
 *
 *      Código fonte: cacique.c
 *
 *      O programa recebe informações sobre a quantidade de candidatos N
 *      em uma aldeia e calcula qual destes candidatos é sorteado
 *      para ser o novo cacique da aldeia.
 *      Neste sorteio, todos os N candidatos interessados em ser tornar
 *      cacique são numerados de 1 a N e dispostos em um grande círculo.
 *      O processo de escolha é realizado eliminando gradativamente o
 *      segundo candidato restante no círculo. Esta eliminação começa
 *      pelo canditado numerado com  1 e continua em sentido horário
 *      até sobrar uma única pessoa. Ao fim do processo, a última pessoa
 *      no círculo é o cacique.
 *
 *
 *      -Entrada: O número total de candidatos n.
 *
 *      -Saída: Um valor inteiro indicando qual candidato é o novo cacique.
 *
 */

#include <stdio.h>

int encontraCacique(int n)
{
    if(n == 1) return 1;

    if(n % 2 == 0 )
        return 2*encontraCacique(n/2)-1;
    else
        return 2*encontraCacique(n/2)+1;
}

int main()
{

    int n;

    scanf("%d", &n);

    printf("Novo Cacique: %d.\n", encontraCacique(n));

    return 0;
}
