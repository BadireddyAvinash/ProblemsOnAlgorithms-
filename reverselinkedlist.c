#include <stdio.h>
#include <stdlib.h>
struct node
{
	int data;
	struct node *next;
};
struct node *head=NULL;
void insertList(int data)
{
	struct node *temp=(struct node*)malloc(sizeof(struct node));
	temp->data=data;
	temp->next=head;
	head=temp;
}
void reverseList()
{
	struct node *prev,*current,*after;
	prev=NULL;
	current=head;
	while(current!=NULL)
	{
		after=current->next;
		current->next=prev;
		prev=current;
		current=after;
	}
	head=prev;
}
void printList()
{
	struct node *temp=head;
	while(temp!=NULL)
	{
		printf("%d ", temp->data);
		temp=temp->next;
	}
}
void main()
{
	insertList(1);
	insertList(2);
	insertList(3);
	insertList(4);
	insertList(5);
	printf("Original List: ");
	printList();
	printf("\n");
	reverseList();
	printf("List after reversing: ");
	printList();
}