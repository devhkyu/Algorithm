#include <stdio.h>
#include <stdlib.h>

int minof(const int a[], int n) {
	int i;
	int min = a[0];
	for (i = 1; i < n; i++)
		if (a[i] < min) min = a[i];
	return min;
}

int main(void) {
	int i;
	int* height;
	int number;
	printf("People: ");
	scanf_s("%d", &number);
	height = calloc(number, sizeof(int));
	printf("[%d] Enter people's height:\n", number);
	for (i = 0; i < number; i++) {
		printf("height[%d]: ", i);
		scanf_s("%d", &height[i]);
	}
	printf("Minimum is %d.\n", minof(height, number));
	free(height);
	return 0;
}