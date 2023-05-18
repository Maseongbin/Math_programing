#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

/*
void main()
{
	int A[3][3] = { {1,2,3},{4,5,6},{7,8,9} };
	int B[3][3] = { {1,1,1},{1,1,1},{1,1,1} };
	int C[3][3] = { 0 };

	int i = 0, j = 0;
	
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			C[i][j] = A[i][j] + B[i][j];
			printf("%3d ", C[i][j]);
		}
		printf("\n");
	}
}
*/

/*
void main()
{
	int A[3][3] = { {1,2,3},{4,5,6},{7,8,9} };
	int B[3][3] = { {1,1,1},{1,1,1},{1,1,1} };
	int C[3][3] = { 0 };

	int i = 0, j = 0;

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			C[i][j] = A[i][j] - B[i][j];
			printf("%3d ", C[i][j]);
		}
		printf("\n");
	}
}
*/



void main()
{
	int A[3][3] = { {1,2,3},{4,5,6},{7,8,9} };
	int B[3][3] = { {1,1,1},{1,1,1},{1,1,1} };
	int C[3][3] = { 0 };
	int k = 0;
	int i = 0, j = 0;

	printf("»ó¼ö°ª: ");
	scanf("%d", &k);

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			C[i][j] = k * A[i][j];
			printf("%3d ", C[i][j]);
		}
		printf("\n");
	}
}