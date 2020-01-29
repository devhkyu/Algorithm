#include <stdio.h>
int sum_1(int n) {
	int sum = 0;
	for (int i = 1; i <= n; i++) {
		sum += i;
		if (i < n)
			printf("%d + ", i);
		else
			printf("%d = ", i);
	}
	printf("%d\n", sum);
	return sum;
}

int sum_2(int n) {
	if (n % 2 == 0)
		return ((1 + n) * (n / 2));
	else
		return ((1 + n) * (n / 2) + (n / 2) + 1);
}

int sumof(int a, int b) {
	int sum = 0;
	for (a; a <= b; a++) {
		sum += a;
	}
	return sum;
}

int main(void) {
	int n;
	int a, b;
	
	printf("n: "); scanf_s("%d", &n);
	sum_1(n);
	
	printf("n: "); scanf_s("%d", &n);
	int sum2 = sum_2(n);
	printf("Sum_2 is %d\n", sum2);

	printf("a: "); scanf_s("%d", &a);
	printf("b: "); scanf_s("%d", &b);
	int sum3 = sumof(a, b);
	printf("Sumof(%d, %d) is %d\n", a, b, sum3);
}