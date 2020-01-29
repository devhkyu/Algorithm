#include <stdio.h>

int main(void) {
	int i, j;
	printf("===== Multiplication table =====\n");
	for (i = 1; i <= 9; i++) {
		for(j=1;j<=9;j++)
			printf("%3d", i * j);
		putchar('\n');
	}
	return 0;
}