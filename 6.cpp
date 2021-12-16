#include <stdio.h>
#include <locale.h>
int main()
{
	int n;
	setlocale(LC_CTYPE, "Russian_Russia.1251");
	printf("введите n: ");
	scanf_s("%d", &n);
	while (n % 3 == 0)
		n /= 3;
	if (n == 1)
		printf("число является степенью 3.");
	else
		printf("число не является степенью 3.");
	return 0;
}