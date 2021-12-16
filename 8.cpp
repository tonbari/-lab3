#include <stdio.h>

int main()
{
	int n = 1;
	float a, count = 1.0;
	printf("введите a: ");
	scanf_s("%f", &a);
	while (count < a) {
		n++;
		count = count + (1.0 / n);
	}
	printf("%d", n);
	return 0;
}