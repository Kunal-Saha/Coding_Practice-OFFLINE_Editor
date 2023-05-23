#include <stdio.h>
#include <stdlib.h>


struct node 
{
  int data;
  struct node* next;
};

struct node *head = NULL;
void insert_begin(int);
void insert_end(int);
void delete_begin();
void delete_end();
void display();
int c=0;
int main()
{
	int ch=0;
	int i, data;
	while(ch!=6)
	{
		printf("\n\n");
		printf("1. Insert an element at the beginning of linked list.\n");
    	printf("2. Insert an element at the end of linked list.\n");
    	printf("3. Delete an element from beginning.\n");
    	printf("4. Delete an element from end.\n");
    	printf("5. Display linked list.\n");
    	printf("6. Exit\n");
    	printf("\n\n");
    	printf("Enter Your Choice\n");
    	scanf("%d",&ch);
    	if (ch == 1) 
		{
		  	printf("Enter value of element\n");
      		scanf("%d", &data);
      		insert_begin(data);
      	}
      	else if (ch == 2) 
		{
			printf("Enter value of element\n");
      		scanf("%d", &data);
      		insert_end(data);
    	}
    	else if (ch == 3)
      		delete_begin();
      	else if (ch == 4)
      		delete_end();
      	else if (ch == 5)
      		display();
      	else if (ch == 6)
      	{
			printf("Exit");
      		break;
      	}
    	else
      		printf("Please enter valid input.\n");
	}
	return 0;
}
void insert_begin(int x)
{
	struct node *t;
	t = (struct node*)malloc(sizeof(struct node));
  	t->data = x;
  	c++;

  	if (head == NULL)
	{
    	head = t;
    	head->next = NULL;
    	return;
  	}

  t->next = head;
  head = t;
}
void insert_end(int x)
{
	struct node *t, *t1;
	t = (struct node*)malloc(sizeof(struct node));
  	t->data = x;
  	c++;
  	if (head == NULL) 
	{
		head = t;
    	head->next = NULL;
    	return;
    }
    t1 = head;
    while (t1->next != NULL)
    	t1 = t1->next;
    t1->next = t;
    t->next = NULL;
}
void display()
{
	struct node *t;
	t = head;
	if (t == NULL) 
	{
		printf("Linked list is empty.\n");
		return;	
	}
	printf("There are %d elements in linked list.\n", c);
	while (t->next != NULL)
	{
		printf("%d\n", t->data);
		t = t->next;
	}
	printf("%d\n", t->data);
}
void delete_begin()
{
	struct node *t;
  	int n;
	if (head == NULL)
	{
		printf("Linked list is empty.\n");
    	return;
  	}
  	n = head->data;
  	t = head->next;
  	free(head);
  	head = t;
  	c--;

  printf("%d Deleted from the beginning successfully.\n", n);
}
void delete_end() {
  struct node *t, *u;
  int n;

  if (head == NULL)
  {
    printf("Linked list is empty.\n");
    return;
  }
  c--;
  if (head->next == NULL)
  {
    n = head->data;
    free(head);
    head = NULL;
    printf("%d deleted from end successfully.\n", n);
    return;
  }

  t = head;

  while (t->next != NULL) 
  {
    u = t;
    t = t->next;
  }

  n = t->data;
  u->next = NULL;
  free(t);

  printf("%d deleted from end successfully.\n", n);
}




