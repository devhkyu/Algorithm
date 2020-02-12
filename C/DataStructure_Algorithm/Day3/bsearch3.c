#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct {
	char name[10];
	int height;
	int weight;
}Person;

int npcmp(const Person* x, const Person* y) {
	return strcmp(x->name, y->name);
}

int main(void) {
	Person x[] = {
		{"Jason", 179, 79},
		{"Marry", 172, 63},
		{"Kalson", 176, 52},
		{"Jade", 165, 51},
		{"Watson", 181, 73},
		{"Angelo", 172, 84}
	};
	int nx = sizeof(x) / sizeof(x[0]);
	int retry;
	puts("Search using Name");
	do {
		Person temp, * p;
		printf("Name: ");
		scanf_s("%s", temp.name, 10);
		p = bsearch(&temp, x, nx, sizeof(Person), (int(*)(const void*, const void*))npcmp);
		if (p == NULL)
			puts("Failed to Search");
		else {
			puts("Success to search");
			printf("x[%d] : %s %dcm %dkg\n", (int)(p - x), p->name, p->height, p->weight);
		}
		printf("Retry? (1) Yes (2) No : ");
		scanf_s("%d", &retry);
	} while (retry == 1);
	return 0;
}