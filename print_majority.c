//AIM --> Write a function which takes an array and prints the majority element 
//(if it exists), otherwise prints “No Majority Element”. 
//A majority element in an array A[] of size n is an element that appears 
//more than n/2 times (and hence there is at most one such element).


#include<stdio.h>
#include<stdlib.h>
void print_majority(int arr[],int n);
int main()
{
	int n,c=0,i,j;
	printf("Enter the size\n");
	scanf("%d",&n);
	printf("Enter the nos\n");
	int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	print_majority(a,n);
	
}

void print_majority(int arr[],int n)
{
	
    int max_c = 0;  //this counter does not allow a variable to repeat more than 1
    int f = -1; // flag variable
	int i,j; 
    for(i = 0; i < n; i++)  
    {  
        int c = 0;  
        for(j = i; j < n; j++)  
        {  
            if(arr[i] == arr[j])  
            c++;  
        }   
        if(c > max_c)  
        {  
            max_c = c;  
            f= i;  
        }  
    }   
    if (max_c > n/2)  
    printf("The Majority Element is : %d",arr[f]);  
      
    else
    printf ("No Majority Element");  
} 
	

