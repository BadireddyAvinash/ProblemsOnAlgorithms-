//Program to Implement queue using arrays
#include <stdio.h>
int front = 0,rare = -1;
int queue[100];
void printElementsOfQueue()
{
	int i;
	for(i=front;i<=rare;i++)
	{
		printf("%d ",queue[i]);
	}
	printf("\n");
}
void enqueueIntoQueue(int x)
{
	rare = rare+1;
	queue[rare] = x;
	printf("Elements after enqueue() of %d into queue are:", x);
	printElementsOfQueue();
}
void dequeueFromQueue()
{
	int temp1=front;
	int temp2=front+1;
	while(temp2<=rare)
	{
		queue[temp1] = queue[temp2];
		temp1++;
		temp2++;
	}
	rare=rare-1;
	printf("Elements after dequeue() are :");
	printElementsOfQueue();
}
void printFrontAndRareElementsOfQueue()
{
	printf("The front and rare elements of queue are %d and %d respecitvely.", queue[front],queue[rare]);
}
void main()
{
	enqueueIntoQueue(1);
	enqueueIntoQueue(2);
	enqueueIntoQueue(3);
	enqueueIntoQueue(4);
	dequeueFromQueue();
	printFrontAndRareElementsOfQueue();
}