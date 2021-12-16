#include <stdio.h>
#include <locale.h>
int main()
{
	int n, square, cube, sum = 0;
	setlocale(LC_CTYPE, "Russian_Russia.1251");
	printf("введите n: ");
	scanf_s("%d", &n);
	square = n * n;
	while (n > 0) {
		sum = sum + (n % 10);
		n /= 10;
	}
	cube = sum * sum * sum;
	if (cube == square)
		printf("правда");
	else
		printf("ложь");
	return 0;
}