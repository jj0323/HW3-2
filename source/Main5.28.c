#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
int main(void)
{
	char a;
	printf("¿é¤J¤@­Ó¦r¥À¡G");
	scanf("%c", &a);
	if (a > 0x60)
	{
		a = toupper(a);
		printf("%c\n", a);
	}
	else if (a < 0x5B)
	{
		a = tolower(a);
		printf("%c\n", a);
	}
	system("pause");
	return 0;
}