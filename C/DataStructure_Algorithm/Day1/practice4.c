#include <stdio.h>
void q_12() {
	printf("   |");
	for (int i = 1; i <= 9; i++) {
		printf("%3d", i);
	}
	printf("\n---+---------------------------\n");
	for (int i = 1; i <= 9; i++) {
		printf("%2d |", i);
		for (int j = 1; j <= 9; j++) {
			printf("%3d", i * j);
		}
		printf("\n");
	}
}

void q_13() {
	printf("   |");
	for (int i = 1; i <= 9; i++) {
		printf("%3d", i);
	}
	printf("\n---+---------------------------\n");
	for (int i = 1; i <= 9; i++) {
		printf("%2d |", i);
		for (int j = 1; j <= 9; j++) {
			printf("%3d", i + j);
		}
		printf("\n");
	}
}

void q_14() {
	int num;
	printf("[Making square]\n");
	do {
		printf("Number? "); scanf_s("%d", &num);
	} while (num <= 0);
	for (int i = 1; i <= num; i++) {
		for (int j = 1; j <= num; j++) {
			printf("*");
		}
		printf("\n");
	}
}

void q_15() {
	int width, height;
	printf("[Making squre]\n");
	do {
		printf("Height? "); scanf_s("%d", &height);
		printf("Width? "); scanf_s("%d", &width);
	} while (width <= 0 && height <= 0);
	for (int i = 1; i <= height; i++) {
		for (int j = 1; j <= width; j++) {
			printf("*");
		}
		printf("\n");
	}
}

int main(void) {
	printf("\n"); q_12();
	printf("\n"); q_13();
	printf("\n"); q_14();
	printf("\n"); q_15();
}