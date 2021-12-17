#include <stdio.h>

int main() {
	int n;

	scanf_s("%d", &n);

	for (int q = 2; q * q * q <= n; q++) {
		if (n % (q * q) == 0 && n % (q * q * q) != 0) {
			printf("%d\n", q);
		}
	}

	return 0;
}