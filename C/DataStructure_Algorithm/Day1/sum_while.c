#include <stdio.h>

int main(void) {
	int i, n;
	int sum;
	puts("Sum of 1 to n.\n");
	printf("n: "); scanf_s("%d", &n);
	sum = 0;
	i = 1;
	while (i <= n) {
		sum += i;
		i++;
	}
	printf("Sum of 1 to %d is %d\n", n, sum);
	return 0;
}