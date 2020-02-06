#include <stdio.h>
#include <stdlib.h>

int search(int a[], int n, int key) {
	int i = 0;
	a[n] = key;
	printf("   |");
	for (int j = 0; j < n; j++) {
		printf("%3d", j);
	}
	printf("\n---+---");
	for (int j = 0; j < n; j++) {
		printf("---");
	}
	while (1) {
		if (i != n) {
			printf("\n   |  ");
			for (int j = 0; j < n; j++) {
				if (j != i)
					printf("   ");
				else
					printf("%s", "*");
			}
			printf("\n%3d|", i);
			for (int j = 0; j < n; j++)
				printf("%3d", j);
		}
		if (a[i] == key)
			break;
		i++;
	}
	printf("\n");
	return i == n ? -1 : i;
}

int main(void) {
	int i, nx, ky, idx;
	int* x;
	puts("Linear Search");
	printf("Number of Elements: ");
	scanf_s("%d", &nx);
	x = calloc(nx + 1, sizeof(int));
	for (i = 0; i < nx; i++) {
		printf("x[%d]: ", i);
		scanf_s("%d", &x[i]);
	}
	printf("Key: ");
	scanf_s("%d", &ky);
	idx = search(x, nx, ky);
	if (idx == -1)
		puts("Failed to search.");
	else
		printf("%d is in x[%d]\n", ky, idx);
	free(x);
	return 0;
}