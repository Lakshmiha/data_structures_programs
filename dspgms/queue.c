#include<stdio.h>
#define N 50
int queue_array[N];
int rear=-1;
int front=-1;
void Enqueue()
{
	int add_item;
	if(rear==N-1)
	{
		printf("Queue Overflow!!");
	}
	else
	{
		if(front==-1)
			front=0;
			printf("Insert:");
			scanf("%d",&add_item);
			rear=rear+1;
			queue_array[rear]=add_item;
	}
}

void Dequeue()
{
	if(front==-1||front>rear)
	{
		printf("Queue Underflow!!");
		return;
	}
	else
	{
		printf("element deleted from Queue is %d\n",queue_array[front]);
		front=front+1;
	}
}

void traverse()
{
	if(front==-1||front>rear)
	{
		printf("Queue is empty!!\n");
		return;
	}
	printf("Traversing Queue elements:\n");
	for(int i=front;i<=rear;i++)
	{
		printf("Elements at index %d:%d\n",i,queue_array[i]);
	}
	printf("\n");
}
int main()
{
	int choice;
	while(1)
	{
		printf("1.Enqueue\n");
		printf("2.Dequeue\n");
		printf("3.traverse\n");
		printf("4.Exit\n");
		printf("Enter your choice:");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
					Enqueue();
					break;
			case 2:
					Dequeue();
					break;
			case 3:
					traverse();
					break;
			case 4:
					return 0;
			default:
					printf("Invalid choice!!");
		}
	}

}
