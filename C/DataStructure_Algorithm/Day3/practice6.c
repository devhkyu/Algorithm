#include <stdio.h>
#include <stdlib.h>

int int_cmp(const long* a, const long* b) {
	if (*a < *b)
		return -1;
	else if (*a > * b)
		return 1;
	else
		return 0;
}

int main(void) {
	int i;
	long* x;
	long ky, nx;
	long* p;
	puts("Search using bsearch function");
	printf("Number of Element: ");
	scanf_s("%ld", &nx);
	x = calloc(nx, sizeof(long));
	printf("Enter in order\n");
	printf("x[0]: ");
	scanf_s("%ld", &x[0]);
	for (i = 1; i < nx; i++) {
		do {
			printf("x[%d]: ", i);
			scanf_s("%ld", &x[i]);
		} while (x[i] < x[i - 1]);
	}
	printf("Key: ");
	scanf_s("%ld", &ky);
	p = bsearch(&ky, x, nx, sizeof(long), (long(*)(const void*, const void*)) int_cmp);
	if (p == NULL)
		puts("Failsded to Search");
	else
		printf("%ld is in x[%d]\n", ky, (int)(p - x));
	free(x);
	return 0;
}