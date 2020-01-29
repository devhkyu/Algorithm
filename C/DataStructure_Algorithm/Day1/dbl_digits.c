#include <stdio.h>

int main(void) {
	int no;+
	printf("Please Enter only double-digits integer.\n");
	do {
		printf("Number: "); scanf_s("%d", &no);
	} while (no < 10 || no > 99);
	printf("Number has become %d.\n", no);
	return 0;
}