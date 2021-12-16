#include <stdio.h>
#include <locale.h>
int main()
{
	int n = 1;
	float a, num = 0;
	setlocale(LC_CTYPE, "Russian_Russia.1251");
	printf("введите a: ");
	scanf_s("%f", &a);
	while (num < a) {
		num += (1.0 / n++);
	}
	printf("ответ: %f", num);
	return 0;
}
