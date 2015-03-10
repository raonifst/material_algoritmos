#include <stdio.h>
int main()
{
	int n, soma = 0;
	scanf("%d",&n);
	while(n > 0)	{
		soma += (n%2);
		n = n / 2;
	}
	printf("%d\n", soma);
	return 0;
}
/* T(n) = n / 2 + c = O(lg(n)) */
