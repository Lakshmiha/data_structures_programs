#include<stdio.h>
void insert(int arr[],int size)
{
	printf("Enter %d elements of array:",size);
	for(int i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
	}
}
void sort(int arr[],int size)
{
		for(int i=0;i<size;i++)
		{
			for(int j=0;j<size-i-1;j++)
			{
				if(arr[j]>arr[j+1])
				{
					int temp=arr[j];
					arr[j]=arr[j+1];
					arr[j+1]=temp;
				}
			}
		}
}
	void mergedarray(int arr1[],int arr2[],int m,int n,int merge[])
	{
		int i=0;
		int j=0;
		int k=0;
		while(i<m && j<n)
		{
			if(arr1[i]<arr2[j])
			{
				merge[k++]=arr1[i++];
			}
			else
			{
				merge[k++]=arr2[j++];
			}
			while(i<m)
			{
				merge[k++]=arr1[i++];
			}
			while(j<n)
			{
				merge[k++]=arr2[j++];
			}
		}
	}
int main()
{
	int m,n;
	printf("Enter the size of first array:");
	scanf("%d",&m);
	int arr1[m];
	insert(arr1,m);
	printf("Enter the size of second array:");
	scanf("%d",&n);
	int arr2[n];
	insert(arr2,n);

	printf("Elements before sorting of array1:");
	for(int i=0;i<m;i++)
	{
		printf("%d",arr1[i]);
	}
	printf("\n");

	printf("Elements before sorting of array2:");
	for(int i=0;i<n;i++)
	{
		printf("%d",arr2[i]);
	}
	printf("\n");

	sort(arr1,m);
	sort(arr2,n);

	printf("Elements after sorting of array1:");
	for(int i=0;i<m;i++)
	{
		printf("%d",arr1[i]);
	}
	printf("\n");

	printf("Elements after sorting of array2:");
	for(int i=0;i<n;i++)
	{
		printf("%d",arr2[i]);
	}
	printf("\n");

	int merge[m+n];
	mergedarray(arr1,arr2,m,n,merge);
	printf("Merged array is:");
	for(int i=0;i<m+n;i++)
	{
		printf("%d",merge[i]);
	}
	printf("\n");
}
