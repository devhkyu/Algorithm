#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i;
	int* a;
	int na;
	printf("Number of elements: ");
	scanf_s("%d", &na);
	a = calloc(na, sizeof(int));
	if (a == NULL)
		puts("Failed to allocate memory.");
	else {
		printf("Enter %d Integers.\n", na);
		for (i = 0; i < na; i++) {
			printf("a[%d] : ", i);
			scanf_s("%d", &a[i]);
		}
		printf("Each values of elements is below.\n");
		for(i=0;i<na;i++)
			printf("a[%d] = %d\n", i, a[i]);
			free(a);
	}
	return 0;
}