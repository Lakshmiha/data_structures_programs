#include<stdio.h>
#include<stdlib.h>
int AdjMat[4][4]={{0,0,1,0},{1,0,0,0},{0,0,0,1},{0,0,1,0}};
int visit[4]={0,0,0,0};
int Queue[4],front=-1,rear=-1,add_item,temp;

void enqueue(int add_item)
{
 	if(rear==4-1)
	{
		printf("\n queue is overflow.\n");
	}
	if(rear<4)
	{
		if(rear==-1 && front==-1)
		{ 
			front=rear=0;
			Queue[rear]=add_item;
		}

		else
 		{
		rear=rear+1;
		Queue[rear]=add_item;
		}
	}
}  
int dequeue()
{
   if(front==-1 )
   {
     printf("\n queue is underflow.\n");
   }
  else if(front==rear)
  {
    
    temp=Queue[front];
    front=-1;
    rear=-1;
  }
  else
   {
     
     temp=Queue[front];
     front=front+1;
   }
    return(temp);
    
}
int isVisited(int vtx)
{
	return(visit[vtx]);
}


void bfs(int sv)
{
	int vtx;
	enqueue(sv);
	while(front!=-1 && rear!=-1)
	{
		vtx=dequeue();
		if(!(isVisited(vtx)))
		{
			visit[vtx]=1;
			printf("%d\n",vtx);
			for(int i=0;i<4;i++)
			{
				if(AdjMat[vtx][i]==1)
					enqueue(i);
			}
		} 
	}
}

int main()
{
	int i,j,k;
   	for (i=0;i<4;++i)
	{
		for(j=0;j<4;++j)
		{
			printf("%d ",AdjMat[i][j]);
		}
		printf("\n");
	}
	printf("source vertex :");
        scanf("%d",&k);
        bfs(k);
}
