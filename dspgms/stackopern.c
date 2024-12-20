#include<stdio.h>
#define MAX_SIZE 5
int stack[MAX_SIZE];
int top=-1;
int isFull()
{
	return top=MAX_SIZE-1;
}
int isEmpty()
{
	return top=-1;
}
void push(int elem)
{
	if(top==MAX_SIZE-1)
	{
		printf("Stack overflow!!");
		return;
	}
	printf("Pushed element is:%d",elem);
	top++;
	stack[top]=elem;
}
int pop()
{
	if(top==-1)
	{
		printf("Stack underflow!!");
		return -1;
	}
	else
	{
		int element=stack[top];
		top--;
		return element;
	}	
}

void traverse()
{
	printf("Traversing stack elements\n");
	for(int i=top;i>=0;i--)
	{
		printf("%d\n",stack[i]);	
	}	
	printf("\n");
	
	if(top==-1)
	{
		printf("Stack is empty");
		return;
	}
}
int main()
{
	int elem;
	int choice;
	while(1)
	{
		printf("\nStack operations\n1.Push\n2.Pop\n3.traverse\n4.exit\n");
		printf("Enter your choice:");
		scanf("%d",&choice);
		switch(choice)
		{	
			case 1:
					printf("Enter the element to be pushed:");
					scanf("%d",&elem);
					push(elem);
					break;
			case 2:
					elem=pop();
					printf("popped element=%d",elem);
					break;
			case 3:
					traverse();
					break;
			case 4:
					return 0;
					break;
			default:
					printf("\nInvalid choice\n");
		}
	}
	return 0;
}

	
	
