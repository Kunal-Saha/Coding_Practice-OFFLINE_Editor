//AIM --> Write a program to implement Heap tree.

#include <stdio.h>
int size = 0;
void swap(int *a, int *b)
{
  int temp = *b;
  *b = *a;
  *a = temp;
}
void heapify(int a[], int size, int i)
{
  if (size == 1)
  {
    printf("Single element in the heap");
  }
  else
  {
    int largest = i;
    int l = 2 * i + 1;
    int r = 2 * i + 2;
    if (l < size && a[l] > a[largest])
      largest = l;
    if (r < size && a[r] > a[largest])
      largest = r;
    if (largest != i)
    {
      swap(&a[i], &a[largest]);
      heapify(a, size, largest);
    }
  }
}
void insert(int a[], int num)
{
  if (size == 0)
  {
    a[0] = num;
    size += 1;
  }
  else
  {
    a[size] = num;
    size += 1;
    for (int i = size / 2 - 1; i >= 0; i--)
    {
      heapify(a, size, i);
    }
  }
}
void deleteRoot(int a[], int num)
{
  int i;
  for (i = 0; i < size; i++)
  {
    if (num == a[i])
      break;
  }

  swap(&a[i], &a[size - 1]);
  size -= 1;
  for (int i = size / 2 - 1; i >= 0; i--)
  {
    heapify(a, size, i);
  }
}
void printArray(int a[], int size)
{
  for (int i = 0; i < size; ++i)
    printf("%d ", a[i]);
  printf("\n");
}
int main()
{
  int a[10];
  insert(a, 3);
  insert(a, 4);
  insert(a, 9);
  insert(a, 5);
  insert(a, 2);
  printf("Max-Heap array: ");
  printArray(a, size);
  deleteRoot(a, 4);
  printf("After deleting an element: ");
  printArray(a,size);
}
