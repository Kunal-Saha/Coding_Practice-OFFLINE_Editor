#include<bits/stdc++.h>
using namespace std;
class node
{
	public:
		int data;
		node* next;
		node(int d)
		{
			data=d;
			next=NULL;
		}
};



bool search(node* head,int key)
{
	if(head==NULL) return false;
	else if(head->data==key) return true;
	else return search(head->next,key);
}

void insertAthead(node* &head,int data)
{
	node *n=new node(data);
	n->next=head;
	head=n;
}
int length(node* head)
{
	int len=0;
	while(head!=NULL)
	{
		head=head->next;
		len++;
	}
    return len;
}
void insertAtend(node* &head,int data)
{
	if(head==NULL)
	{
		head=new node(data);
		return;
	}
	node* temp=head;
	node *n=new node(data);
	while(temp->next!=NULL) temp=temp->next;
	temp->next=n;
	n->next=NULL;
	return;
	
}
void insertAtMiddle(node* &head,int data,int pos)
{
	if(head==NULL || pos==0) insertAthead(head,data);
	else if(pos>length(head)) insertAtend(head,data);
	else
	{
		//int jump=1;
		node*temp=head;
		node*n=new node(data);
		while(pos!=1)
		{
			temp=temp->next;
			pos--;
		}
		n->next=temp->next;
		temp->next=n;
	}
}
void print(node *head)
{
	while(head!=NULL)
	{
		cout<<head->data<<"-->";
		head=head->next;
	}
}
void deleteAthead(node* &head)
{
	if(head==NULL) return;
	node* temp=head;
	head=head->next;
	delete(temp);
	return;
}
void deleteAtend(node* head)
{
	if(head==NULL)
	return;
	node* prev;
	node* temp=head;
	while(temp->next!=NULL)
	{
		prev=temp;
		temp=temp->next;
	}
	delete(temp);
	prev->next=NULL;
	return;
}
void deleteAtMiddle(node* head,int pos)
{
	if(head==NULL||pos==0)
	deleteAthead(head);
	else if(pos>length(head)) deleteAtend(head);
	//int j=1;
	node* temp=head;
	while(pos!=2)
	{
		temp=temp->next;
		pos--;
	}
	node* nextnode=temp->next;
	temp->next=nextnode->next;
	delete(nextnode);
}
void reverse(node* head)
{
	node* prev=NULL;
	node* curr=head;
	node* next;
	while(curr!=NULL)
	{
		next=curr->next;
		curr->next=prev;
		prev=curr;
		curr=next;
	}
	print(prev);
}

node* middleVal(node* head)
{
	if(head==NULL || head->next==NULL) cout<<head->data<<endl;
	node* fast=head;
	node* slow=head;
	if(fast!=NULL&&fast->next!=NULL)
	{
		fast=fast->next->next;
		slow=slow->next;
	}
	cout<<slow->data<<endl;
	return slow;
}

node* merge(node* head1,node* head2)
{
	if(head1==NULL) return head2;
	if(head2==NULL) return head1;
	node* head3;
	if(head1->data<head2->data)
	{
		head3=head1;
		head3->next=merge(head1->next,head2);
	}
	else{
		head3=head2;
		head3->next=merge(head1,head2->next);
	}
	return head3;
}
node* mergesort(node* head)
{
	if(head==NULL ||head->next==NULL) return head;
	node* mid=middleVal(head);
	node* a=mid;
	node* b=mid->next;
	mid->next=NULL;
	a=mergesort(a);
	b=mergesort(b);
	node* c=merge(a,b);
	return c;
}

bool detectCycle(node* head)
{
	node* fast=head,* slow=head;
	while(fast!=NULL &&fast->next!=NULL)
	{
		fast=fast->next->next;
		slow=slow->next;
		if(fast==slow) return true;
	}
	return false;
}

void kthElement(node* head,int k)
{
	if(head==NULL||head->next==NULL) cout<<head->data<<endl;
	node* slow=head,* fast=head;
	while(k--) fast=fast->next;
	while(fast!=NULL)
	{
		fast=fast->next;
		slow=slow->next;
	}
	cout<<slow->data<<endl;
}

int main()
{
	node *head=NULL;
	insertAthead(head,5);
	insertAthead(head,4);
	insertAthead(head,3);
	insertAtend(head,6);
	insertAtend(head,7);
	insertAtend(head,6);
	insertAtend(head,8);
	//insertAtMiddle(head,2,4);
	//middleVal(head);
	print(head);
	cout<<endl;
	kthElement(head,5);
	middleVal(head);
	cout<<endl;
	reverse(head);
//	print(head);
//	deleteAthead(head);         
//	deleteAtend(head);
//	deleteAtMiddle(head,3);
//	print(head);
//	if(search(head,4)) cout<<"Element Present"<<endl;
//	else cout<<"Element Not Present"<<endl;
}
