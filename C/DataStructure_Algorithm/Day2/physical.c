#include <stdio.h>
#define VMAX 21

typedef struct {
	char name[20];
	int height;
	double vision;
}PhysCheck;

double ave_height(const PhysCheck dat[], int n) {
	int i;
	double sum = 0;
	for (i = 0; i < n; i++)
		sum += dat[i].height;
	return sum / n;
}

void dist_vision(const PhysCheck dat[], int n, int dist[]) {
	int i;
	for (i = 0; i < VMAX; i++)
		dist[i] = 0;
	for (i = 0; i < n; i++)
		if (dat[i].vision >= 0.0 && dat[i].vision <= VMAX / 10.0)
			dist[(int)(dat[i].vision * 10)]++;
}

int main(void) {
	int i;
	PhysCheck x[] = {
	{"Park HyunKyu", 162, 0.3},
	{"Ham JinA", 173, 0.7},
	{"Choi YoonMi", 175, 2.0},
	{"Hong YeonEui", 171, 1.5},
	{"Lee SooJin", 168, 0.4},
	{"Kim YoungJoon", 174, 1.2},
	{"Park YongKyu", 169, 0.8}
	};
	int nx = sizeof(x) / sizeof(x[0]);
	int vdist[VMAX];
	puts("===============================");
	puts("Name\t\tHeight\tVision\t");
	puts("===============================");
	for (i = 0; i < nx; i++)
		printf("%-18.18s%4d%5.1f\n", x[i].name, x[i].height, x[i].vision);
	printf("\nHeight(AVG): %5.1f cm\n", ave_height(x, nx));
	dist_vision(x, nx, vdist);
	printf("\nDistribution of Vision\n");
	for (i = 0; i < VMAX; i++)
		printf("%3.1f ~ : %2d people\n", i / 10.0, vdist[i]);
	return 0;
}