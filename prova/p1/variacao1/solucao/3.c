#include <stdio.h>
int main()
{
	int i, n, soma = 1, max;
	scanf("%d",&n);	
	for(i=2; i <= n/2 ; i++)
		soma += ( (n%i == 0) ? i : 0 );
	if(soma == n) printf("SIM\n");
	else printf("NAO\n");
	return 0;
}
