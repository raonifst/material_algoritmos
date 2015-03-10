#include<stdio.h>

int codigoLetra(char letra)
{
    int codigo[]={2,2,2,3,3,3,4,4,4,5,5,5,6,6,6,7,7,7,7,8,8,8,9,9,9,9};
    if(letra == ' ') return 0;
    return (letra >= 'a' && letra <='z')? codigo[letra-'a']: -1;
}

void imprimirDigitosDeUmaLetra(char letra)
{

    int rep[]={1,2,3,1,2,3,1,2,3,1,2,3,1,2,3,1,2,3,4,1,2,3,1,2,3,4};
    int i;

    if(letra == ' ') printf("0");

    if(letra >= 'a' && letra <= 'z')
        for(i = 0; i < rep[letra-'a']; i++ )
            printf("%d", codigoLetra(letra));
}

void SMS(char frase[])
{
    int i;
    for(i = 0; frase[i]!= '\0'; i++)    {
        if(i > 0 && codigoLetra(frase[i-1]) == codigoLetra(frase[i])
                && codigoLetra(frase[i]))
            printf("x");
        imprimirDigitosDeUmaLetra(frase[i]);
    }
}

int main()
{
    SMS("monalisa esta no louvre");
    return 0;
}
