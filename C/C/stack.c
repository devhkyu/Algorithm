#include <stdio.h>

#define SIZE 10

void initStack();
void printStack();
int push(int num);
int pop();

int stack[SIZE];
int top;

void main() {
	initStack();
	int i, num;
	int menu = 0;
	while (menu != -1) {
		printf("\n1. Push\t2. Pop\t3. PrintStack\t\t(-1: Exit)\n");
		printf("CHOOSE ONE: ");
		scanf_s("%d", &menu);
		if (menu == 1) {
			printf("PUSH: ");
			scanf_s("%d", &num);
			push(num);
			printf("\n%d has been pushed!\n", num);
		}
		else if (menu == 2) {
			i = pop();
			printf("\nPopped value is %d\n", i);
		}
		else if (menu == 3) {
			printStack();
		}
		else if (menu == -1) {
			break;
		}
		else {
			printf("\nERROR INPUT!\n");
		}
	}
	printf("\nBye~!\n");
}

void initStack() {
	top = -1;
}

void printStack() {
	int i;
	printf("\nStack contents: TOP ----> Bottom\n");
	for (i = top; i >= 0; i--) {
		printf("%-6d", stack[i]);
	}
	printf("\n");
}

int push(int num) {
	if (top >= SIZE - 1) {
		printf("\nStack Over Flow!!\n");
		return -1;
	}
	stack[++top] = num;
	return num;
}

int pop() {
	if (top < 0) {
		printf("\nStack Under Flow!!\n");
		return -1;
	}
	return stack[top--];
}