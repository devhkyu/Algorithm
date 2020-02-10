#include <stdio.h>
#include <stdlib.h>

int search_idx(const int a[], int n, int key, int idx[]) {
	int count = 0;
	for (int i = 0; i < n; i++) {
		if (a[i] == key)
			idx[count++] = i;
	}
	return count;
}

int main(void) {
	int num;
	int key;
	int* x;
	int* ix;
	do {
		printf("Number of Elements? ");
		scanf_s("%d", &num);
	} while (num <= 0);
	x = calloc(num, sizeof(int));
	ix = calloc(num, sizeof(int));
	for (int i = 0; i < num; i++) {
		printf("x[%d] = ", i);
		scanf_s("%d", &x[i]);
	}
	printf("What is your key? ");
	scanf_s("%d", &key);
	int count = search_idx(x, num, key, ix);
	printf("Key(%d) = %d times in array!\n", key, count);
	printf("idx = ");
	for (int i = 0; i < count; i++)
		printf("%d ", ix[i]);
	free(x, ix);
	return 0;
}