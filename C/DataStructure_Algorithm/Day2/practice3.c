#include <stdio.h>
#include <stdlib.h>

double aveof(const int a[], int n) {
	int i;
	int sum = 0;
	for (i = 0; i < n; i++) {
		sum += a[i];
	}
	return sum/n;
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
	printf("Sum is %.2lf.\n", aveof(height, number));
	free(height);
	return 0;
}