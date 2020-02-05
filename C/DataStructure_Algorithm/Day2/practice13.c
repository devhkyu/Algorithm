#include <stdio.h>

typedef struct {
	int y;
	int m;
	int d;
}Date;

int mdays[][12] = {
	{31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31},
	{31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31} };

int isleap(int year) {
	return year % 4 == 0 && year % 100 != 0 || year % 400 == 0;
}

Date Dateof(int y, int m, int d) {
	Date date;
	date.y = y;
	date.m = m;
	date.d = d;
	return date;
}

Date After(Date x, int n) {
	x.d += n;
	while (1) {
		if ((x.d - mdays[isleap(x.y)][x.m - 1]) > 0) {
			x.d -= mdays[isleap(x.y)][x.m - 1];
			x.m++;
		}
		else {
			return x;
		};
	}
}

Date Before(Date x, int n) {
	x.d -= n;
	while (1) {
		if (x.d < 0) {
			x.d += mdays[isleap(x.y)][x.m - 2];
			x.m--;
		}
		else {
			return x;
		};
	}
}

int main(void) {
	int number = 0;
	int year, month, day;
	printf("Year: "); scanf_s("%d", &year);
	printf("Month: "); scanf_s("%d", &month);
	printf("Day: "); scanf_s("%d", &day);
	printf("Number: "); scanf_s("%d", &number);
	
	Date date = Dateof(year, month, day);
	printf("\n<1>  %d %d %d\n", date);
	printf("<2>  %d %d %d\t%d days after!\n", After(date, number), number);
	printf("<3>  %d %d %d\t%d days before!\n", Before(date, number), number);
	return 0;
}