//Aim --> WAP to implement a Doubly Queue.

#include<stdio.h>
#include<stdlib.h>
#define SIZE 5

int a[SIZE];
int front = -1, rear = -1;
int num,num1,i;
int main()
{
	int a[SIZE];
	int front = -1, rear = -1;
	int ch=0;
	while(ch!=6)
	{
    	printf("\n\n");
    	printf("Press 1 for Push_front\nPress 2 for Push_rear\nPress 3 for Pop_front\nPress 4 for Pop_rear\nPress 5 for DISPLAY\nPress 6 for EXIT");
    	printf("\n\n");
    	printf("Enter Your Choice\n");
    	scanf("%d",&ch);
    	if (ch==1)
    	{
    		printf("\nEnter Element: ");
    		scanf("%d",&num);
    		Push_front(num);	
		}
		else if (ch==2)
		{
			printf("\nEnter Element: ");
    		scanf("%d",&num1);
    		Push_rear(num1);
			
		}
		else if (ch==3)
		{
			Pop_front();
		}
		else if (ch==4)
		{
			Pop_rear();
		}
		else if (ch==5)
		{
			display();
		}
		else if (ch==6)
		{
			printf("****EXIT*****");
		}
		else
			printf("Invalid Choice");
	}
	return;
	
}
int Push_front(int x)
{
	if (front==0 && rear==SIZE-1 || rear==front-1)
		printf("\n#############OverFlow############");
	else if(front==0)
	{
		front=SIZE-1;
		a[front]=x;
	}
	else if(front==-1)
	{
		front=rear=0;
		a[front]=x;
	}
	else
	{
		a[front]=x;	
	}
		
	return;
}
int Push_rear(int x)
{
	if (front==0 && rear==SIZE-1 || rear==front-1)
		printf("\n#############OverFlow############");
	else if(rear==-1)
	{
		front=rear=0;
		a[rear]=x;
	}
	else
	{
		rear=rear+1;
		a[rear]=x;
	}
	return;
}
int Pop_front()
{
	if (rear==-1 && front==-1)
		printf("$$$$$$$$$$$$UnderFlow$$$$$$$$$$$$$$");
	else if(front==rear)
	{
		printf("%d is Deleted",a[front]);
		rear=-1;
		a[front]=NULL;
		front=-1;
	}
	else if(front==SIZE-1)
	{
		front=0;
	}
	else
	{
		printf("%d is Deleted",a[front]);
		a[front]=NULL;
		front+=1;
	}
	return;
}
int Pop_rear()
{
	if (rear==-1 && front==-1)
		printf("$$$$$$$$$$$$UnderFlow$$$$$$$$$$$$$$");
	else if(front==rear)
	{
		printf("%d is Deleted",a[front]);
		a[front]=NULL;
		rear=-1;
		front=-1;
	}
	else if(rear==0)
	{
		rear=SIZE-1;
	}
	else
	{
		printf("%d is Deleted.",a[rear]);
		a[rear]=NULL;
		rear-=1;
	}
	return;	
}
int display()
{
	for(i=0;i<SIZE;i++)
	{
		printf("%d ",a[i]);
	}
	return;
}
