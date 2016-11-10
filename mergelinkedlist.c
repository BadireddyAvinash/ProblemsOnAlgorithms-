#include <stdlib.h>
#include <stdio.h>
struct node 
{
	int data;
	struct node *next;
};
struct node *head1 = NULL;
struct node *head2 = NULL;
void createLinkedList1(int x)
{
	struct node *newNode = (struct node*)malloc(sizeof(struct node));
	if(head1 == NULL)
	{
		newNode->data = x;
		newNode->next = NULL;
		head1 = newNode;
	}
	else
	{
		newNode->data = x;
		newNode->next = head1;
		head1 = newNode;
	}
}
void createLinkedList2(int x)
{
	struct node *newNode = (struct node*)malloc(sizeof(struct node));
	if(head2 == NULL)
	{
		newNode->data = x;
		newNode->next = NULL;
		head2 = newNode;
	}
	else
	{
		newNode->data = x;
		newNode->next = head2;
		head2 = newNode;
	}
}
void printList1()
{
	struct node *temp = head1;
	while(temp!=NULL)
	{
		printf("%d ", temp->data);
		temp = temp->next;
	}
	printf("\n");
}
void printList2()
{
	struct node *temp = head2;
	while(temp!=NULL)
	{
		printf("%d ", temp->data);
		temp = temp->next;
	}
}
void mergeLinkedList()
{
	struct node *temp = head1;
	while(temp->next! = NULL)
	{
		temp = temp->next;
	}
	temp->next = head2;
}
void sortLinkedList()
{
	struct node *temp = head1;
	struct node *after = NULL;
	int count=0,i,temp1;
	while(temp!=NULL)
	{
		temp = temp->next;
		count = count+1;
	}
	for(i=0;i<count;i++)
	{
		temp = head1;
		after = temp->next;
		while(temp!=NULL && after!=NULL)
		{
			if(temp->data>after->data)
			{
				temp1 = temp->data;
				temp->data = after->data;
				after->data = temp1;
			}
			temp = temp->next;
			after = after->next;
		}
	}
	printList1();
}
void reverseLinkedList()
{
	struct node *prev = NULL;
	struct node *current = head1;
	struct node *after = NULL;
	while(current!=NULL)
	{
		after = current->next;
		current->next = prev;
		prev = current;
		current = after;
	}
	head1 = prev;
	printList1();
}
void main()
{
	createLinkedList1(1);
	createLinkedList1(2);
	createLinkedList1(3);
	createLinkedList2(4);
	createLinkedList2(5);
	createLinkedList2(6);
	printf("List1:");
	printList1();
	printf("List2:");
	printList2();
	mergeLinkedList();
	printf("\n");
	printf("After merge List1 and List2:");
	printList1();
	printf("After sorting:");
	sortLinkedList();
	printf("After reversing the list:");
	reverseLinkedList();
}