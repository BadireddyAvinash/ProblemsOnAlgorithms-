//Program to Implement stack using LinkedList
#include <stdio.h>
#include <stdlib.h>
struct node
{
	int data;
	struct node *next;
};
struct node *top = NULL;
void printStackElements()
{
	struct node *temp=top;

	while(temp!=NULL)
	{
		printf("%d ", temp->data);
		temp = temp->next;
	}
	printf("\n");
}
void pushIntoStack(int x)
{
	struct node *newNode=(struct node*)malloc(sizeof(struct node));
	newNode->data = x;
	if(top == NULL)
	{
		newNode->next = NULL;
		top = newNode;
	}
	else
	{
		newNode->next = top;
		top = newNode;
	}
	printf("After push() of %d, the elements of stack are:", x);
	printStackElements();
}
void popFromStack()
{
	struct node *temp = top->next;
	top->next = NULL;
	top = temp;
	printf("After pop, the elements in the stack are:");
	printStackElements();
}
void peakOfStack()
{
	printf("The Peak of the stack is %d ", top->data);
}
void main()
{
	pushIntoStack(1);
	pushIntoStack(2);
	pushIntoStack(3);
	pushIntoStack(4);
	popFromStack();
	popFromStack();
	peakOfStack();
}