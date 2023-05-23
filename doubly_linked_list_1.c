//AIM --> Write a program for Doubly link list Deletion at the end and beginning.


#include<stdio.h>  
#include<stdlib.h>  
struct node  
{  
    struct node *prev;  
    struct node *next;  
    int data;  
};  
struct node *head;  
void insertion_beginning();  
void insertion_last();
void display();
void main()
{
	int ch=0;
	int i, data;
	while(ch!=6)
	{
		printf("\n\n");
		printf("1. Insert an element at the beginning of linked list.\n");
    	printf("2. Insert an element at the end of linked list.\n");
		printf("3. Delete an element at the beginning of linked list.\n");
    	printf("4. Delete an element at the end of linked list.\n");
    	printf("5. Display linked list.\n");
    	printf("6. Exit\n");
    	printf("\n\n");
    	printf("Enter Your Choice\n");
    	scanf("%d",&ch);
    	if (ch == 1) 
    		insertion_beginning(); 
    	else if(ch==2)
    		insertion_last();
    	else if(ch==3)
    		deletion_beginning(); 
    	else if(ch==4)
    		deletion_last();
    	else if(ch==5)
    		display();
    	else if(ch==6)
    		printf("Exit");
    	else
    		printf("Please enter valid input.\n");			
	}
}
void deletion_beginning()  
{  
    struct node *ptr;  
    if(head == NULL)  
    {  
        printf("\n *************UNDERFLOW****************");  
    }  
    else if(head->next == NULL)  
    {  
        head = NULL;   
        free(head);  
        printf("\nnode deleted\n");  
    }  
    else  
    {  
        ptr = head;  
        head = head -> next;  
        head -> prev = NULL;  
        free(ptr);  
        printf("\nnode deleted\n");  
    }  
  
} 
void deletion_last()  
{  
    struct node *ptr;  
    if(head == NULL)  
    {  
        printf("\n#######OVERFLOW########");  
    }  
    else if(head->next == NULL)  
    {  
        head = NULL;   
        free(head);   
        printf("\nnode deleted\n");  
    }  
    else   
    {  
        ptr = head;   
        if(ptr->next != NULL)  
        {  
            ptr = ptr -> next;   
        }  
        ptr -> prev -> next = NULL;   
        free(ptr);  
        printf("\nnode deleted\n");  
    }  
} 
void display()  
{  
    struct node *ptr;  
    printf("\n printing values...\n");  
    ptr = head;  
    while(ptr != NULL)  
    {  
        printf("%d\n",ptr->data);  
        ptr=ptr->next;  
    }  
} 
void insertion_beginning()  
{  
   struct node *ptr;   
   int item;  
   ptr = (struct node *)malloc(sizeof(struct node));  
   if(ptr == NULL)  
   {  
       printf("\n#######OVERFLOW########");  
   }  
   else
   {
   	printf("\nEnter Item value : ");  
    scanf("%d",&item); 
   	if(head==NULL)  
   	{	  
       ptr->next = NULL;  
       ptr->prev=NULL;  
       ptr->data=item;  
       head=ptr;  
   	}  
   	else   
   	{  
       	ptr->data=item;  
       	ptr->prev=NULL;  
       	ptr->next = head;  
       	head->prev=ptr;  
       	head=ptr;  
   	}	  
   	printf("\nNode inserted\n");  
	}
}
void insertion_last()  
{  
   struct node *ptr,*temp;  
   int item;  
   ptr = (struct node *) malloc(sizeof(struct node));  
   if(ptr == NULL)  
   {  
       printf("\n*********OVERFLOW*******");  
   }
    else  
   {  
       printf("\nEnter value : ");  
       scanf("%d",&item);  
        ptr->data=item;  
       if(head == NULL)  
       {  
           ptr->next = NULL;  
           ptr->prev = NULL;  
           head = ptr;  
       }
	   else  
       {  
          temp = head;  
          while(temp->next!=NULL)  
          {  
              temp = temp->next;  
          }  
          temp->next = ptr;  
          ptr ->prev=temp;  
          ptr->next = NULL;  
        } 
	}
	printf("\nNode inserted\n");
}  


