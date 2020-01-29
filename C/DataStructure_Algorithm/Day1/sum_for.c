#include <stdio.h>

int main(void) {
	int i, n;
	int sum;
	puts("Sum of 1 to n\n");
	printf("n: "); scanf_s("%d", &n);
	sum = 0;
	for (i = 1; i <= n; i++) {
		sum += i;
	}
	printf("Sum of 1 to %d is %d\n", n, sum);
	return 0;
}