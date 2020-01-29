#include <stdio.h>

int max4(int a, int b, int c, int d) {
	int max = a;
	if (b > max) max = b;
	if (c > max) max = c;
	if (d > max) max = d;
	return max;
}

int min3(int a, int b, int c) {
	int min = a;
	if (b < min) min = b;
	if (c < min) min = c;
	return min;
}

int min4(int a, int b, int c, int d) {
	int min = a;
	if (b < min) min = b;
	if (c < min) min = c;
	if (d < min) min = d;
	return min;
}

int main(void) {
	printf("<Q1> max4(1, 2, 3, 4) = %d\n", max4(1, 2, 3, 4));
	printf("<Q2> min3(1, 2, 3) = %d\n", min3(1, 2, 3, 4));
	printf("<Q3> min4(1, 2, 3, 4) = %d\n", min4(1, 2, 3, 4));
}