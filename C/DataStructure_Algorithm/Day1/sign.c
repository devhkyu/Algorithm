#include <stdio.h>

int main(void) {
	int n;
	printf("Enter the integer: "); scanf_s("%d", &n);
	if (n > 0) printf("This is positive integer.\n");
	else if (n < 0) printf("This is negative integer.\n");
	else printf("This is zero.\n");
	return 0;
}