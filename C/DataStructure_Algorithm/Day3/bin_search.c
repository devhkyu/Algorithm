#include <stdio.h>
#include <stdlib.h>

int bin_search(const int a[], int n, int key) {
	int pl = 0;
	int pr = n - 1;
	int pc;
	do {
		pc = (pl + pr) / 2;
		if (a[pc] == key)
			return pc;
		else if (a[pc] < key)
			pl = pc + 1;
		else
			pr = pc - 1;
	} while (pl <= pr);
	return -1;
}

int main(void) {
	int i, nx, ky, idx;
	int* x;
	puts("Binary Search");
	printf("Number of Elements: ");
	scanf_s("%d", &nx);
	x = calloc(nx, sizeof(int));
	printf("Enter the elements in order\n");
	for (i = 0; i < nx; i++) {
		do {
			printf("x[%d]: ", i);
			scanf_s("%d", &x[i]);
		} while (x[i] < x[i - 1]);
	}
	printf("Search Key: ");
	scanf_s("%d", &ky);
	idx = bin_search(x, nx, ky);
	if (idx == -1)
		puts("Failed to search.");
	else
		printf("%d is in x[%d]\n", ky, idx);
	free(x);
	return 0;
}