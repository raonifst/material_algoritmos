#include <stdio.h>
int main()
{
	int i, j, n, soma = 0, primo;
	scanf("%d",&n);	
	for(i=2; i <= n ; i++)	{
		primo = 1;
		for(j = 2; j < i && primo; j++)
			primo = (i%j)? 1 : 0;
		if(primo) soma += i;
	}
	printf("%d\n", soma);
	return 0;
}
