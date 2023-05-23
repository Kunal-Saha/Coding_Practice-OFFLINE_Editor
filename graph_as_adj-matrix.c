#include<stdio.h>
#include<stdlib.h>
int N, M;

void create_matrix(int a1[][N + 1], int a[][2])
{
	int i,j;
	for(i=0;i<N+1;i++)
	{
		for(j=0;j<N+1;j++)
		{
			a1[i][j] = 0;
		}
	}
	for(i=0;i<M;i++)
	{
		int x = a[i][0];
		int y = a[i][1];
		
		a1[x][y] = 1; 
        a1[y][x] = 1;
	}
}

void display(int a1[][N + 1]) 
{
	int i,j;
	for(i=1;i<N+1;i++)
	{
		for(j=1;j<N+1;j++)
			printf("%d ",a1[i][j]);
		printf("\n");
	}
}

void main()
{
	N = 5;
	int a[][2] = { { 1, 2 }, { 2, 3 },  { 4, 5 }, { 1, 5 },{2, 4},{3, 5}};
	M = sizeof(a) / sizeof(a[0]);
	int a1[N + 1][N + 1];
	create_matrix(a1, a); 
	printf("Adjacent Matrix\n\n");
	display(a1);
	return 0;
}
	
