#include <stdio.h>
#include <stdlib.h>
unsigned int f(int n)
{
	if (n == 1 || n == 2)
		return 1;
	if (n >= 3)
		return f(n - 1) + f(n - 2);
}
int main(void)
{
	
	unsigned long long int n,i,j;
	scanf("%d", &n);

	printf("最大數為%d", f(n-1));
	return 0;
}