#include <stdio.h>

#define NTERMOS 100

int main()
{
	double soma= 0.0;
	int i, denominador = 1, numerador = 1, sinal = 1;
	for( i = 1; i <= NTERMOS; i++, sinal *=-1 )	{
		soma +=  sinal*(numerador+0.0)/denominador; 
		denominador *= 2;
		numerador += 1; 
	}
	printf("%lf\n", soma);  
	return 0;
}
