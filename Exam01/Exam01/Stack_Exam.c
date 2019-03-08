#include <stdio.h>
#define STACK_SIZE 10

void Push(int*, int*,int);
int Pop(int*, int*);
void Print(int*,int*);

int main() {
	int top = -1;
	int stack[STACK_SIZE];

	Push(stack, &top, 10);
	Push(stack, &top, 20);
	Push(stack, &top, 30);

	Print(stack,&top);

	Pop(stack, &top);
	Pop(stack, &top);
	Pop(stack, &top);
}

void Push(int* s,int* top,int item) {
	if (*top == STACK_SIZE) {
		printf("--스택이 꽉 찼습니다.--\n");
	}
	else {
		++*top;
		s[*top] = item;
	}
}

int Pop(int* s, int* top) {
	if (*top == -1) {
		printf("--스택이 텅 비었습니다.--\n");
	}
	else {
		printf("%d \n", s[*top]);
		--*top;
	}
}

void Print(int * s,int *top) {
	for (int i = 0; i <= *top; i++) {
		printf("[ %d ] ",s[i]);
	}
	printf("\n");
}