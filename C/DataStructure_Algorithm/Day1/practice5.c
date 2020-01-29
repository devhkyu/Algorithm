#include <stdio.h>

void triangleLB(int n) {
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= i; j++) {
			putchar('*');
		}
		putchar('\n');
	}
}

void triangleLU(int n) {
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n - i + 1; j++) {
			putchar('*');
		}
		putchar('\n');
	}
}

void triangleRU(int n) {
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j < i; j++) {
			putchar(' ');
		}
		for (int k = 1; k <= n - i + 1; k++) {
			putchar('*');
		}
		putchar('\n');
	}
}

void triangleRB(int n) {
	for (int i = 1; i <= n; i++) {
		for (int k = 1; k <= n - i; k++) {
			putchar(' ');
		}
		for (int j = 1; j <= i; j++) {
			putchar('*');
		}
		putchar('\n');
	}
}

void spira(int n) {
	for (int i = 1; i <= n; i++) {
		for (int k = 1; k <= n - i; k++) {
			putchar(' ');
		}
		for (int j = 1; j <= 2 * i - 1; j++) {
			putchar('*');
		}
		putchar('\n');
	}
}

void nrpira(int n) {
	for (int i = 1; i <= n; i++) {
		for (int k = 1; k <= i - 1; k++) {
			putchar(' ');
		}
		for (int j = 1; j <= 2 * (n - i) + 1; j++) {
			printf("%d", i);
		}
		putchar('\n');
	}
}

int main(void) {
	int num;
	do {
		printf("Number: "); scanf_s("%d", &num);
	} while (num <= 0);
	printf("\n[triangleLB]\n"); triangleLB(num);
	printf("\n[triangleLU]\n"); triangleLU(num);
	printf("\n[triangleRU]\n"); triangleRU(num);
	printf("\n[triangleRB]\n"); triangleRB(num);
	printf("\n[spira]\n"); spira(num);
	printf("\n[nrpira]\n"); nrpira(num);
	return 0;
}