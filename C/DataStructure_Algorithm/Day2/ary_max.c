#include <stdio.h>
#include <stdlib.h>

int maxof(const int a[], int n) {
	int i;
	int max = a[0];
	for (i = 1; i < n; i++)
		if (a[i] > max) max = a[i];
	return max;
}

int main(void) {
	int i;
	int* height;
	int number;
	printf("Number of People: ");
	scanf_s("%d", &number);
	height = calloc(number, sizeof(int));
	printf("Enter number [%d] of people's height\n", number);
	for (i = 0; i < number; i++) {
		printf("height[%d] : ", i);
		scanf_s("%d", &height[i]);
	}
	printf("Maximum is %d.\n", maxof(height, number));
	free(height);
	return 0;
}