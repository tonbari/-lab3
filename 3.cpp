#include <stdio.h>

int main()
{
	int i;
	for (i = 11; i <= 999; i++)
		if (i < 100 && i / 10 == i % 10)
			printf("%d\n", i);
		else if (i > 100 && i / 100 == i % 10)
			printf("%d\n", i);
	return 0;
}