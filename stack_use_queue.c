#include<stdio.h>
#include<stdlib.h>
void main()
{
	int size;
	printf("Enter the Size:\n");
	scanf("%d",&size);
	int size1=2*size;
	int arr[size1];
	int front=0;
	int rear=-1;
	int i,k=0;
	printf("Enter the nos:\n");
	for(i=0;i<size;i++)
	{
		rear=rear+1;
		scanf("%d",&arr[i]);
	}
	printf("Original Array:\n");
	for(i=0;i<size;i++)
	{
		printf("%d , ",arr[i]);
	}
	for(i=size1-1;i>rear;i--)
	{
		k=rear;
		if(front>rear)
		{
			printf("##############Underflow##############");
			break;
		}
		else
		{
			arr[i]=arr[front];
			k++;
			front=front+1;
		}
	}
	printf("After Reversing:\n");
	for(i=front;i<k;i++)
	{
		printf("%d , ",arr[i]);
	}
	
}
