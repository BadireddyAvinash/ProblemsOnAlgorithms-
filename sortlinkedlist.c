//Program to sort the LinkedList in ascending order. 
#include <stdio.h>
#include <stdlib.h>
struct node
{
	int data;
	struct node *next;
};
struct node *head=NULL;
void createLinkedList(int x)
{
	struct node *newNode=(struct node*)malloc(sizeof(struct node));
	if(head==NULL)
	{
		newNode->data=x;
		newNode->next=NULL;
		head=newNode;
	}
	else
	{
		newNode->data=x;
		newNode->next=head;
		head=newNode;
	}
}
void printList()
{
	struct node *temp=head;
	while(temp!=NULL)
	{
		printf("%d ",temp->data);
		temp=temp->next;
	}
	printf("\n");
}
void sortLinkedList()
{
	struct node *temp=NULL;
	struct node *after=NULL;
	int i,temp1;
	int count=0;
	temp=head;
	while(temp!=NULL)
	{
		temp=temp->next;
		count++;
	}
	for(i=0;i<count;i++)
	{
		temp=head;
		after=temp->next;
		while(temp!=NULL && after!=NULL)
		{
			if(temp->data>after->data)
			{
				temp1=temp->data;
				temp->data=after->data;
				after->data=temp1;
			}
			temp=temp->next;
			after=after->next;	
		}
	}
	printList();
}
void main()
{
	createLinkedList(1);
	createLinkedList(2);
	createLinkedList(3);
	createLinkedList(4);
	createLinkedList(5);
	createLinkedList(6);
	printList();
	sortLinkedList();
}