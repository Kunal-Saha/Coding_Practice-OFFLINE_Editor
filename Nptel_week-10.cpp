#include<iostream>
using namespace std;
int* func() {
	int x = 10;
	return &x;
}

int main()
{
	int* ptr = func();
	cout<<*ptr<<endl;
}

