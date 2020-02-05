#include <stdio.h>
#include <stdlib.h>

void ary_rcopy(int a[], const int b[], int n) {
	for (int i = 0; i < n; i++)
		a[i] = b[n - i - 1];
}

int main(void) {
	int number;
	int* arr;
	int* brr;

	printf("How many number of array?\n");
	printf(">> ");
	scanf_s("%d", &number);
	arr = calloc(number, sizeof(int));
	brr = calloc(number, sizeof(int));

	for (int i = 0; i < number; i++) {
		if (i == 0) printf("\n");
		printf("arr[%d] = ", i);
		scanf_s("%d", &arr[i]);
	}

	printf("\nResult>\n");
	printf("Arr: ");
	for (int i = 0; i < number; i++)
		printf("%d ", arr[i]);
	printf("\nBrr: ");
	ary_rcopy(brr, arr, number);
	for (int i = 0; i < number; i++)
		printf("%d ", brr[i]);
	return 0;
}