#include <stdio.h>

int main()
{
	int n, count = 0;
	printf("Введите n: ");
	scanf_s("%d", &n);
	while (n > 0) {
		count++;
		n /= 10;
	}
	printf("Количество цифр: %d", count);
	return 0;
}