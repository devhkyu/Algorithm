#include <stdio.h>

int main(void) {
	int i, j, n;
	do {
		printf("How much height is it? ");
		scanf_s("%d", &n);
	} while (n <= 0);
	for (i = 1; i <= n; i++) {
		for (j = 1; j <= i; j++)
			putchar('*');
		putchar('\n');
	}
	return 0;
}