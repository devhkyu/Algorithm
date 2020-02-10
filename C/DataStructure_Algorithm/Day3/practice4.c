#include <stdio.h>
#include <stdlib.h>

int search(const int a[], int n, int key, int idx[]) {
	int count = 0;
	// Line 0 ~ 1
	printf("   |");
	for (int line = 0; line <= 1; line++) {
		for (int i = 0; i < n; i++) {
			if (line == 0) {
				printf("%3d ", i);
				if (i == n - 1)
					printf("\n");
			}
			else {
				if (i == 0) {
					printf("---+");
				}
				else {
					printf("-----");
				}
			}
		}
	}
	printf("\n");
	// Line 2 ~
	int pl = 0;
	int pr = n;
	do {
		int pc = (pl + pr) / 2;
		printf("   |");
		for (int i = 0; i < n; i++) {
			if (i == pc) {
				printf("%3c ", '+');
			}
			if (i == pl) {
				printf(" <- ");
			}
			else if (i == pr - 1) {
				printf(" ->");
			}
			else if (i < n - 2) {
				printf("    ");
			}
		}
		printf("\n");
		for (int j = 0; j < n; j++) {
			if (j == 0)
				printf("%3d|", pc);
			printf("%3d ", a[j]);
		}
		printf("\n");
		if (a[pc] == key) {
			printf("\n");
			return pc;
		}
		else if (a[pc] < key) {
			pl = pc + 1;
			printf("   |\n");
		}
		else {
			pr = pc - 1;
			printf("   |\n");
		}
	} while (pl <= pr);
	return -1;
}

int main(void) {
	int* x;
	int* ix;
	int number, key;
	do {
		printf("Number? ");
		scanf_s("%d", &number);
	} while (number <= 0);
	x = calloc(number, sizeof(int));
	ix = calloc(number, sizeof(int));
	for (int i = 0; i < number; i++) {
		printf("x[%d] = ", i);
		scanf_s("%d", &x[i]);
	}
	printf("Key? ");
	scanf_s("%d", &key);
	int pc = search(x, number, key, ix);
	printf("%d is in x[%d]\n", key, pc);	// Result Line
	free(x);
	free(ix);
	return 0;
}