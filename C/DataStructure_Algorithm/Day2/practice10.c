#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void shuffle(int a[], int n) {
	int inx;
	int* b;
	int* c;
	int x;
	int i, j;
	b = calloc(n, sizeof(int));
	c = calloc(n, sizeof(int));
	srand(time(NULL));
	for (i = 0; i < n; i++) {
		x = rand() % n;
		if (i == 0) {
			b[i] = x;
			continue;
		}
		else {
			for (j = 0; j < i; j++) {
				b[i] = x;
				if (b[j] == x) {
					i--;
					break;
				}
			}
		}
	}
	for (i = 0; i < n; i++) {
		c[i] = a[b[i]];
	}
	for (i = 0; i < n; i++) {
		a[i] = c[i];
	}
}

int main(void) {
	int number;
	int* arr;

	printf("How many number of array?\n");
	printf(">> ");
	scanf_s("%d", &number);
	arr = calloc(number, sizeof(int));

	for (int i = 0; i < number; i++) {
		if (i == 0) printf("\n");
		printf("arr[%d] = ", i);
		scanf_s("%d", &arr[i]);
	}

	printf("\nResult>\n");
	printf("Arr: ");
	for (int i = 0; i < number; i++)
		printf("%d ", arr[i]);
	shuffle(arr, number);
	printf("\nSfl: ");
	for (int i = 0; i < number; i++)
		printf("%d ", arr[i]);
	return 0;
}