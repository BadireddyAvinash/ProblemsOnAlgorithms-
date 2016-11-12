//Program to Implement stack using arrays.
#include <stdio.h>
int top = -1;
#define size 100
int stack[size];
void printStack()
{
	int i;
	printf("elements in the stack are:");
	for(i=0;i<=top;i++)
	{
		printf("%d ", stack[i]);
	}
	printf("\n");
}
void push(int x)
{
	if(top==size-1)
	{
		printf("Stack is full pusg cannot be performed");
	}
	else
	{
		top = top+1;
		stack[top] = x;
		printf("Ater Push() of %d, ", x);
		printStack();
	}
}
void pop()
{
	if(top==-1)
	{
		printf("Pop operation is not possible");
	}
	else
	{
		printf("After Pop(), ");
		top = top-1;
		printStack();
	}
	
}
void peak()
{
	printf("The peak() value in the stack is:%d \n", stack[top]);
}
void main()
{
	push(1);
	push(2);
	push(3);
	push(4);
	pop();
	pop();
	peak();
	push(5);
	peak();
	pop();
}