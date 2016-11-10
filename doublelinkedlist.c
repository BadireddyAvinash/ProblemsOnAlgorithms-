//Program to create linkedlist and print linkedlist in forward and reverse direction.
#include <stdio.h>
#include <stdlib.h>
struct node
{
	int data;
	struct node *next;
	struct node *prev;
};
struct node *head=NULL;
struct node* getNewNode(int x)
{
	struct node *newnode=(struct node*)malloc(sizeof(struct node));
	newnode->data=x;
	newnode->next=NULL;
	newnode->prev=NULL;
	return newnode;
}
void insertNodeAtHead(int x)
{
	struct node *newnode=getNewNode(x);
	if(head==NULL)
	{
		head=newnode;
		return;
	}
	head->prev=newnode;
	newnode->next=head;
	head=newnode;
}
void printList()
{
	struct node *temp=head;
	while(temp!=NULL)
	{
		printf("%d",temp->data);
		temp=temp->next;
	}
}
void printReverseOrder()
{
	struct node *temp=head;
	while(temp->next!=NULL)
	{
		temp=temp->next;
	}
	printf("\n");
	while(temp!=NULL)
	{
		printf("%d",temp->data);
		temp=temp->prev;
	}
}
void main()
{
	insertNodeAtHead(1);
	insertNodeAtHead(2);
	insertNodeAtHead(3);
	insertNodeAtHead(4);
	printList();
	printReverseOr0der();
}