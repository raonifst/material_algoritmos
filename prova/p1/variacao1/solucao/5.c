#include <stdio.h>
int main()
{
	int n, soma = 0;
	scanf("%d",&n);
	while(n)	{
		soma += (n&1)? 1 : 0;
		n = n >> 1;		
	}
	printf("%d\n", soma);
	return 0;
}
/* T(n) = n / 2 + c = O(lg(n)) */
