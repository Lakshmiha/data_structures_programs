#include<stdio.h>
#define SIZE 5
int Cqueue[SIZE],front=-1,rear=-1;
int value;
void enqueue()
{
	if((rear+1)%SIZE==front)
		printf("Circular queue is full!!\n");
	else
	{
		if(front==-1)
		{
			front=0;
		}
		rear=(rear+1)%SIZE;
		printf("Enter the element:");
		scanf("%d",&value);
		Cqueue[rear]=value;
		printf("Inserted element:%d",Cqueue[rear]);
	}
	printf("\n");
}

void dequeue()
{
	if(front==-1 && rear==-1)
	{
		printf("\nCircular queue is empty!!\n");
	}
	else
	{
		if(front == rear)
		{
			printf("Deleted element:%d",Cqueue[front]);
			front=rear=-1;
		}
		else
		{
			printf("\nDeleted element:%d\n",Cqueue[front]);
			front=(front+1)%SIZE;
		}
	}
	printf("\n");
}
void traverse()
{
	int i=front;
	if(front==-1 && rear==-1)
	{
		printf("\nCircular queue is empty!!\n");
	}
	else
	{
		printf("The elements are:\n");
		while(i!=rear)
		{
			printf("%d\n",Cqueue[i]);
			i=(i+1)%SIZE;
		}
		printf("%d",Cqueue[rear]);
	}
}

int main()
{
	int choice,value;
	while(1)
	{
		printf("\n****MENU***\n");
		printf("1.Enqueue\n2.Dequeue\n3.Traverse\n4.Exit\n");
		printf("Enter a choice:");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
					enqueue();
					break;
			case 2:
					dequeue();
					break;
			case 3:
					traverse();
					break;
			case 4:
					return 0;
			default:
					printf("Invalid choice!!\n");
		}
	}
return 0;
}
				
