#include <stdio.h>

#define MAX 1000

int a[MAX];
int top = -1;

void push(int item);
void pop();
void display();
void printArr(int array[], int SizeOfArray);

int main(void)
{
	push(12);
	push(13);
	pop();
	display();
	getchar();
	return 0;
}

void push(int s)
{
	if (top >= (MAX - 1))
	{
		printf("Stack Overflow\n");
		return;
	}
	else
	{
		top++;
		a[top] = s;
		printf("%d successfully added to stack", s);
		printf("\n");
		return;
	}
}

void pop()
{
	if (top < 0)
	{
		printf("Stack Underflow");
		printf("\n");
		return;
	}
	else
	{
		int deleted;
		deleted = a[top];
		--top;
		printf("%d successfully deleted from stack", deleted);
		printf("\n");
		return;
	}
}

void printArr(int array[], int n)
{
	for (int i = 0; i < n; i++)
	{
		printf("%d ", array[i]);
	}
	printf("\n");
	return;
}

void display() {
	if (top >= 0) {
		printf("Stack elements are: \n");
		for (int i = top; i >= 0; i--)
			printf("%d ", a[i]);
		printf("\n");
	}
	else
		printf("Stack is empty :/");
}

