#include <stdio.h>

int med3(int a, int b, int c) {
	if (a >= b)
		if (b >= c)
			return b;
		else if (a <= c)
			return a;
		else
			return c;
	else if (a > c)
		return a;
	else if (b > c)
		return c;
	else
		return b;
}

int main(void) {
	printf("med3(3, 2, 1) = %d\n", med3(3, 2, 1));
	printf("med3(3, 2, 2) = %d\n", med3(3, 2, 2));
	printf("med3(3, 1, 2) = %d\n", med3(3, 1, 2));
	printf("med3(3, 2, 3) = %d\n", med3(3, 2, 3));
	printf("med3(2, 1, 3) = %d\n", med3(2, 1, 3));
	printf("med3(3, 3, 2) = %d\n", med3(3, 3, 2));
	printf("med3(3, 3, 3) = %d\n", med3(3, 3, 3));
	printf("med3(2, 2, 3) = %d\n", med3(2, 2, 3));
	printf("med3(2, 3, 1) = %d\n", med3(2, 3, 1));
	printf("med3(2, 3, 2) = %d\n", med3(2, 3, 2));
	printf("med3(1, 3, 2) = %d\n", med3(1, 3, 2));
	printf("med3(2, 3, 3) = %d\n", med3(2, 3, 3));
	printf("med3(1, 2, 3) = %d\n", med3(1, 2, 3));

	/*
	(problem)
	Explain why this code is not more efficient than med3 function.

	(source code)
	if ((b >= a && c <= a) || (b <= a && c >= a))
		return a;
	else if ((a > b && c < b) || (a < b && c > b))
		return b;
	return c;

	(solution)
	Above this equation is not efficient because it compares 4 times, but med3 compares within 3 times.
	This problem is about time complexity. So this is not efficient.
	   */
}