//Program to implement Queue Using LinkedList
#include <stdio.h>
#include <stdlib.h>
struct node
{
	int data;
	struct node *next;
};
struct node *front = NULL;
void printElementsInTheQueue()
{
	struct node *temp = front;
	while(temp!=NULL)
	{
		printf("%d ", temp->data);
		temp = temp->next;
	}
	printf("\n");
}
void enqueueIntoQueue(int x)
{
	struct node *newNode = (struct node*)malloc(sizeof(struct node));
	newNode->data = x;
	if(front == NULL)
	{
		newNode->next = NULL;
		front = newNode;
	}
	else
	{
		newNode->next = front;
		front = newNode;
	}
	printf("The elements after enqueue of %d are:", x);
	printElementsInTheQueue();
}
void dequeueFromQueue()
{
	struct node *prev = front;
	struct node *after = front->next;
	while(after->next!=NULL)
	{
		prev = prev->next;
		after = after->next;
	}
	prev->next=NULL;
	free(after);
	printf("The elements after dequeue are:");
	printElementsInTheQueue();
}
void main()
{
	enqueueIntoQueue(1);
	enqueueIntoQueue(2);
	enqueueIntoQueue(3);
	dequeueFromQueue();
	dequeueFromQueue();
	enqueueIntoQueue(4);
} 