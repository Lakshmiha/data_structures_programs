#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *llink;
	struct node *rlink;
};
struct node *header=NULL;
struct node *createNode(int data)
{
	struct node *newnode;
	newnode=malloc(sizeof(struct node));
	newnode->data=data;
	newnode->llink=NULL;
	newnode->rlink=NULL;
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
		newnode->rlink=header;
		header->llink=newnode;
		header=newnode;
	}
}

void insertAtEnd(int data)
{
	struct node *newnode;
	newnode=createNode(data);
	struct node *ptr;
	while(ptr->rlink!=NULL)
	{
		ptr=ptr->rlink;
	}
	if(newnode==NULL)
	{
		printf("Not enough memory");
	}
	else
	{
		ptr->rlink=newnode;
		newnode->llink=ptr;
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
			printf("%d\n",ptr->data);
			ptr=ptr->rlink;
		}
	}
}


int main()
{
	struct node *node;
	insertAtFront(10);
	insertAtFront(15);
	insertAtFront(26);
	insertAtEnd(33);
	insertAtEnd(45);
	traverselist();
	return 0;
}
