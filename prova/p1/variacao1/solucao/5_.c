#include <stdio.h>

int main()
{
	int n, atual, anterior, legal = 1;
	scanf("%d", &n);	
	for( anterior = n%10 ; n && legal; n/=10)	{
		atual = n % 10;
		if(atual > anterior)
			legal = 0;
		anterior = atual;
	}
	if(legal) printf("SIM\n");
	else printf("NAO\n");
		
	return 0;
}
