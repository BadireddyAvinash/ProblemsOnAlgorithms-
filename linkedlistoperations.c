//Linkedlist operations Insert, print and Delete. 
#include <stdio.h>
#include <stdlib.h>
struct node
{
	int data;
	struct node *next;
};
struct node *head=NULL;
void insert(int data)
{
	struct node *temp=(struct node*)malloc(sizeof(struct node));
	temp->data=data;
	temp->next=head;
	head=temp;
}
void printList()
{
	struct node *temp=head;
	while(temp!=NULL)
	{
		printf("%d ",temp->data);
		temp=temp->next;
	}
}
void deleteAtHead()
{
	struct node *temp=head;
	head=head->next;
	free(temp);
}
void deleteAtTail()
{
	struct node *first ,*second;
	first=head;
	second=head->next;
	while(second->next!=NULL)
	{
		first=first->next;
		second=second->next;
	}
	first->next=NULL;
	free(second);
}
void deleteAtPosition(int k)
{
	if(k==0)
    {
        struct node *temp=head;
        head=head->next;
        free(temp);
    }
    else
    {
        struct node *prev=head;
        int i;
        for(i=1;i<k;i++)
        {
            prev=prev->next;    
        }
        struct node *del=prev->next;
        struct node *after=del->next;
        prev->next=after;
        free(del);
    }
}
void main()
{
	insert(1);
	insert(2);
	insert(3);
	insert(4);
	insert(5);
	printList();
	deleteAtPosition(0);
	deleteAtTail();
	deleteAtHead();
	printList();

}