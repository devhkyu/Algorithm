#include <stdio.h>
#include <stdlib.h>

int bin_search2(const int a[], int n, int key) {
	int ix = 0;
	int pr = 0;
	int pl = n;
	do {
		int pc = (pr + pl) / 2;
		if (a[pc] == key) {
			ix = pc;
			pl -= 2;
		}
		else if (a[pc] < key)
			pl = pc;
		else
			pr = pc;
		if (pc == 1) {
			if (a[pc - 1] == key)
				return pc - 1;
			else
				return ix;
		}
	} while (1);
}

int main(void) {
	int* x;
	int number;
	int key;
	do {
		printf("Number? ");
		scanf_s("%d", &number);
	} while (number <= 0);
	x = calloc(number, sizeof(int));
	for (int i = 0; i < number; i++) {
		printf("x[%d] = ", i);
		scanf_s("%d", &x[i]);
	}
	printf("Key? ");
	scanf_s("%d", &key);
	int ix = bin_search2(x, number, key);
	printf("\nResult>\n%d is in x[%d]\n", x[ix], ix);
	return 0;
}