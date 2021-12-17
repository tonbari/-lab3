#include <stdio.h>

int main()
{
	int m, k = 0, num = 1;
	printf("введите m > 1: ");
	scanf_s("%d", &m);
	if (m <= 1) {
		printf("число должно быть > 1");
		return 0;
	}
	while (num * 4 < m) {
		num *= 4;
		k++;
	}
	printf("k = %d (%d)", k, num);
	return 0;
}