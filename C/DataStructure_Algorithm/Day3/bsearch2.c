#include <stdio.h>
#include <stdlib.h>

int int_cmpr(const int* a, const int* b) {
	if (*a < *b)
		return 1;
	else if (*a > * b)
		return -1;
	else
		return 0;
}

int main(void) {
	int i, nx, ky;
	int* x;
	int* p;
	puts("Search using bsearch function");
	printf("Number of Elements: ");
	scanf_s("%d", &nx);
	x = calloc(nx, sizeof(int));
	printf("Enter in re-order\n");
	printf("x[0]: ");
	scanf_s("%d", &x[0]);
	for (i = 1; i < nx; i++) {
		do {
			printf("x[%d]: ", i);
			scanf_s("%d", &x[i]);
		} while (x[i] > x[i - 1]);
	}
	printf("Key: ");
	scanf_s("%d", &ky);
	p = bsearch(&ky, x, nx, sizeof(int), (int(*)(const void*, const void*)) int_cmpr);
	if (p == NULL)
		puts("Failed to search");
	else
		printf("%d is in x[%d]\n", ky, (int)(p - x));
	free(x);
	return 0;
}