#include <stdio.h>

int main()
{
	int n, soma = 0;
	scanf("%d", &n);	
	while(n){
		soma += (n % 10);
		n /= 10; 
	}
	printf("%d\n", soma);
		
	return 0;
}
