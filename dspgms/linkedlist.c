#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node * next;
};
struct node *header=NULL;
struct node *createNode(int data)
{
	struct node *newnode;
	newnode=malloc(sizeof(struct node));
	newnode->data=data;
	newnode->next=NULL;
	return(newnode);
}
void insertAtFront(int data)
{
	struct node *newnode;
	newnode=createNode(data);
	if(header==NULL)
	{
		header=newnode;
	}
	else
	{
		newnode->next=header;
		header=newnode;
	}
}
void insertAtEnd(int item)
{
	struct node *ptr;
	struct node *newnode;
	ptr=header;
	while(ptr->next!=NULL)
	{
		ptr=ptr->next;
	}
	newnode=createNode(item);
	if(newnode==NULL)
	{
		printf("Not enough memory!!");
	}
	else
	{
		newnode->data=item;
		newnode->next==NULL;
		ptr->next=newnode;
	}
}

void insertAtAny(int value)
{
	struct node *ptr;
	struct node *newnode;
	if(ptr==NULL)
	{
		printf("Key not found!!");
	}
	else
	{
		newnode=createNode(value);
		newnode->next=ptr->next;
		ptr->next=newnode;
		newnode->data=value;	
	}
}

void deleteAtFront()
{
	struct node *ptr;
	if(header==NULL)
	{
		printf("Linked list is empty!!");
	}
	else
	{
		ptr=header;
		header=header->next;
		free(ptr);
	}
}

void deleteAtEnd()
{
	struct node*ptr;
	struct node*ptr1;
	if(header==NULL)
	{
		printf("Linked list is empty!!");
	}
	else
	{
		ptr=header->next;
		ptr1=header->next;
		while(ptr->next!=NULL)
		{
			ptr1=ptr;
			ptr=ptr->next;
		}
		ptr->next=NULL;
		free(ptr);
	}
}

void traverselist()
{
	struct node *ptr;
	if(header==NULL)
	{
		printf("List is empty!!");
	}
	else
	{
		ptr=header;
		while(ptr!=NULL)
		{
			printf("\n%d",ptr->data);
			ptr=ptr->next;
		}
	}
}


int main()
{
	struct node *node;
	insertAtFront(10);
	insertAtFront(20);
	insertAtFront(35);
	insertAtEnd(40);
	insertAtAny(50);
	traverselist();
	deleteAtFront();
	deleteAtEnd();
	traverselist();
	return(0);
}
