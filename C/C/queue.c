#include <stdio.h>
#define SIZE 10

int enqueue(int num);
int dequeue();
void printList();
void initQueue();

queue[SIZE] = { 0, };
int top = 0;
int flag = 0;

void main() {
	int menu = 0;
	int num = 0;
	int deq_num = 0;

	while (menu != 5) {
		printf("\n====================================================\n");
		printf("(1. ENQUEUE  2. DEQUEUE  3. PRINTLIST  4. INIT  5. EXIT) ==>  ");
		scanf_s("%d", &menu);
		printf("====================================================\n");
		switch (menu) {
		case 1:
			if (top != SIZE) {
				printf("\nNUM? ");
				scanf_s("%d", &num);
				enqueue(num);
			}
			else {
				printf("\nSTACK OVERFLOW!\n");
			}
			break;
		case 2:
			dequeue(num);
			break;
		case 3:
			printList();
			break;
		case 4:
			initQueue();
			break;
		case 5:
			break;
		default:
			printf("\nINPUT ERROR\n");
			break;
		}
	}
}

int enqueue(int num) {
	queue[top] = num;
	top++;
	printf("\nENQUEUED!\n");
	return 0;
}

int dequeue() {
	if (top == 0) {
		printf("\nNO QUEUE\n");
		return -1;
	}
	else {
		if (top != flag) {
			flag++;
			printf("\nDEQUEUED!\n");
			return queue[flag];
		}
		else {
			printf("\nSTACK UNDERFLOW!\n");
			return -1;
		}
	}
}

void printList() {
	printf("\n");
	if (top != 0 && top - flag != 0) {
		printf("[LIST] ");
		for (int i = flag; i < top; i++) {
			printf("%d ", queue[i]);
		}
	}
	else {
		printf("NONE");
	}
	printf("\n");
}

void initQueue() {
	top = 0;
	flag = 0;
	printf("\nINITIALIZED!\n");
}