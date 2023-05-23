//AIM --> WAP to create a Simple Binary Tree

#include<stdio.h> 
#include<stdlib.h> 
struct node  
{ 
    int data; 
    struct node *left; 
    struct node *right; 
}; 

struct node* newNode(int data) 
{
	struct node* node = (struct node*)malloc(sizeof(struct node));
	node->data = data;
	node->left = NULL; 
	node->right = NULL; 
	return(node);
}
int main()
{
	struct node *root = newNode(5);
	root->left = newNode(2); 
	root->right = newNode(8); 
	root->left->left = newNode(1);
	root->left->right = newNode(4);
	root->right->left = newNode(6);
	root->right->right = newNode(10);
	printf("Root Node = %d\n",root->data );
	printf("Left node = %d\n",root->left->data );
	printf("Right node = %d\n",root->right->data);
	printf("Left left node = %d\n",root->left->left->data);
	printf("Left right node = %d\n",root->left->right->data);
	printf("Right left node = %d\n",root->right->left->data);
	printf("Right Right node = %d\n",root->right->right->data );
}

