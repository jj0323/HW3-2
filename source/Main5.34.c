#include <stdio.h>
#include <stdlib.h>
int a(int i, int j)
{
	if (j == 0)
		return 1;
	if (j >= 1)
		return i * a(i, j - 1);
}
int main(void)
{
	int i, j;
	printf("請輸入多少的幾次方：");
	scanf("%d%d", &i, &j);
	if (j == 0)
	{
		printf("1");
		return 0;
	}
		
	printf("%d\n", i * a(i, j - 1));
	system("pause");
	return 0;
}