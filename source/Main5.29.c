#include <stdio.h>
#include <stdlib.h>
int gcd(int a, int b)
{
	return b != 0 ? gcd(b, a%b) : a;
}
int main(void)
{
	int a, b;
	printf("請輸入兩個整數:");
	scanf("%d%d", &a, &b);
	printf("LCM=%d\n", a*b / gcd(a, b));
	system("pause");
	return 0;
}