//Program to find Maximum element in the stack. 
#include <stdio.h>
int top = -1;
#define size 100
int stack[size];
void pushIntoStack(int x)
{
	if(top == size-1)
	{
		printf("Stack is full push operation can not be performed");
	}
	else
	{
		top = top+1;
		stack[top] = x;
	}
}
void popFromStack()
{
	if(top == -1)
	{
		printf("Stack is Empty pop operation cannot be performed");
	}
	else
	{
		top = top-1;
	} 
}
void printStackElements()
{
	int i;
	printf("Elements in the stack are:");
	for(i=0;i<=top;i++)
	{
		printf("%d ",stack[i]);
	}
	printf("\n");
}
void maxElementInStack()
{
	int maxElement=0,i;
	for(i=0;i<=top;i++)
	{
		if(maxElement<stack[i])
		{
			maxElement=stack[i];
		}
	}
	printf("The Maximum element in stack is: %d\n",maxElement);
}
void main()
{
	int option,x;
	while(1)
	{
		printf("\n");
		printf("Press ctrl+c to exit\n");
		printf("Enter your option \n 1)Push \n 2)Pop \n 3)printStackElements \n 4)maxElementInStack:   ");
		scanf("%d",&option);
		printf("\n");
		switch(option)
		{
			case 1:
				printf("Enter the value to Push:");
				scanf("%d",&x);
				pushIntoStack(x);
				break;
			case 2:
				popFromStack();
				break;
			case 3:
				printStackElements();
				break;
			case 4:
				maxElementInStack();
				break;
			default:
				printf("Invalied option");
				break;
		}
	}
}