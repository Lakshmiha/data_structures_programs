#include<stdio.h>
int main()
{
	int Sum[20],elem,total=0,i;
	printf("Enter no of values:");
	scanf("%d",&elem);
	for(i=0;i<elem;i++)
	{
		scanf("%d",&Sum[i]);
	}
	for(i=0;i<elem;i++)
	{
		total=total+Sum[i];
	}
	printf("Sum is:%d",total);
	return 0;
}
