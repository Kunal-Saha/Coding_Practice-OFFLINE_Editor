//AIM --> WAP to implement Circular queue concept . your program must have following part:
//(a) enqueue (b)dequeue (c)empty queue[UnderFlow] (d) full queue[OverFlow] (e) Display Queue

#include<stdio.h>
#include<stdlib.h>
#define SIZE 5

int a[SIZE];
int front = -1, rear = -1;


int enqueue(int num) {
	
    if ((rear+1)%SIZE==front)
    printf("\n *************Overflow************** \n");
	else{
	if (front == -1) front = 0;
    rear = (rear + 1) % SIZE;
    a[rear] = num;
    printf("\n Inserted -> %d", num);
		
	}
  return;
}


int dequeue() {
  int del;
  if (front==-1 && rear==-1) {
    printf("\n ##############Underflow############## \n");
    return (-1);
  } else {
    del = a[front];
    if (front == rear) {
      front = -1;
      rear = -1;
    } 
    else {
      front = (front + 1) % SIZE;
    }
    printf("\n Deleted element -> %d \n", del);
    return (del);
  }
}


int display() {
  int i;
  
    printf("\n Front -> %d ", front);
    printf("\n Items -> ");
    for (i = front; i != rear; i = (i + 1) % SIZE) {
      printf("%d ", a[i]);
    }
    printf("%d ", a[i]);
    printf("\n Rear -> %d \n", rear);
  
  return;
}

int main()
{
	int a[SIZE];
	int front = -1, rear = -1;
	int ch=0;
	while(ch!=4)
	{
    	printf("\n\n");
    	printf("Press 1 for ENQUEUE\nPress 2 for DEQUEUE\nPress 3 for DISPLAY\nPress 4 for EXIT");
    	printf("\n\n");
    	printf("Enter Your Choice\n");
    	scanf("%d",&ch);
    	if(ch==1)
		{
			int n;
			printf("Enter No. for Incertion\n");
			scanf("%d",&n);
			enqueue(n);
		}
		else if(ch==2)
		{
			dequeue();
		}
		else if(ch==3)
			display();
		else if(ch==4)
			printf("$$$$$Exit$$$$$");
		else
			printf("Invalid Choice");
	}

return 0;
}


