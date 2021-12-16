#include <stdio.h>

int main()
{
	int i, count = 0;
	for (i = 102; i <= 987; i++)
		if (i / 100 != i % 10 && i / 100 != i % 100 / 10 && i % 100 / 10 != i % 10)
			count++;
	printf("%d", count);
	return 0;
}