#include <stdio.h>

int main()
{
	int n, i = 0, i1, k = 1, k1 = 0;
	scanf_s("%d", &n);
	while (n > i) {
		k++;
		for (i1 = 1; i1 <= k; i1++)
			if (k % i1 == 0)
				k1++;
		if (k1 == 2) {
			printf("%d ", k);
			i++;
		}
		k1 = 0;
	}
	return 0;
}