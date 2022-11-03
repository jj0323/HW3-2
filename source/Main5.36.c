#include <stdio.h>
#include <stdlib.h>

int moved = 0;

void hanoi(int n, char A, char B, char C);

int main() {
	int n;
	printf("請輸入有幾層：");
	scanf("%d", &n);
	printf("\n");
	hanoi(n, 'A', 'B', 'C');
	printf("\n總共移動 %d 步\n", moved);
	system("pause");
	return 0;
}

void hanoi(int n, char A, char B, char C) {
	if (n == 1) {
		printf("從 %c to %c\n", A, C);
		moved++;
	}
	else {
		hanoi(n - 1, A, C, B);
		hanoi(1, A, B, C);
		hanoi(n - 1, B, A, C);
	}
}