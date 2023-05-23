#include<stdio.h>

struct node
{
	int data;
	struct node *left;
	struct node *right;
} node;
struct node *root;
struct node *newNode;

void insert();
void inorder(*root);
int main()
{
	int ch=0;
	root=NULL;
	while(ch!=3)
	{
		printf("Enter 1 For insertion\nEnter 2 for Display\nEnter 3 for Exit\n");
		int ch;
		scanf("%d",&ch);
		switch(ch)
		{
		
		case 1:
			insert();
			break;
		case 2:
			inorder(*root);
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
void inorder(struct node* root) 
{ 
    if (root != NULL) { 
        inorder(root->left); 
        printf("%d \n", root->data); 
        inorder(root->right); 
    } 
} 

void insert()
{
  	struct node *ptr, *parentptr , *nodeptr;  
    ptr = (struct node*)malloc(sizeof(struct node));
	int item; 
	printf("\nEnter element to insert\n");
	scanf("%d",&item); 
    if(ptr == NULL)  
    {  
        printf("can't insert\n");  
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
    printf("Node Inserted\n");  
    }  
}
