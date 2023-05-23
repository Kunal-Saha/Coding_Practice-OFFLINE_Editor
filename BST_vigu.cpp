#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	node* left;
	node *right;
};
struct node* root;
struct node* newNode;

void insert();
void inorder();
int main()
{
	int ch;
	scanf("%d",&ch);
	root=NULL;
	while(ch!=4)
	{
		switch(ch)
		{
		
		case 1:
			insert();
			break;
		case 3:
			printf("\nThank You\n");
			break;
		default:
			printf("\nInvalid Choice\n");
			break;
		}
	}
	return 0;
}

void insert()
{
  	struct node *ptr, *parentptr , *nodeptr;  
    ptr = (struct node *) malloc(sizeof (struct node));
	int item; 
	printf("\nEnter element to insert\n");
	scanf("%d",&item); 
    if(ptr == NULL)  
    {  
        printf("can't insert");  
    }  
    else   
    {  
    	ptr -> data = item;  
    	ptr -> left = NULL;  
    	ptr -> right = NULL;   
    if(root == NULL)  
    {  
        root = ptr;  
        root -> left = NULL;  
        root -> right = NULL;  
    }  
    else   
    {  
        parentptr = NULL;  
        nodeptr = root;   
        while(nodeptr != NULL)  
        {  
            parentptr = nodeptr;   
            if(item < nodeptr->data)  
            {  
                nodeptr = nodeptr -> left;   
            }   
            else   
            {  
                nodeptr = nodeptr -> right;  
            }  
        }  
        if(item < parentptr -> data)  
        {  
            parentptr -> left = ptr;   
        }  
        else   
        {  
            parentptr -> right = ptr;   
        }  
    }  
    printf("Node Inserted");  
    }  
}
