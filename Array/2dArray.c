//SUM OF TWO MATRICES
#include<stdio.h>
int main()
{
	int i,j,sum=0,m,n;
	printf("Enter size of the Matrix(m and n):");
	scanf("%d%d",&m,&n);
	int A[3][3],B[3][3],C[3][3];
	printf("Enter emts for 1st ARRAY:\n");
	
	for( i=0;i<m;i++)
		for(j=0;j<n;j++)
			scanf("%d",&A[i][j]);
	
	printf("Enter emts for 2nd ARRAY:\n");
	for( i=0;i<m;i++)
		for(j=0;j<n;j++)
			scanf("%d",&B[i][j]);
	printf("MAtrix 1:\n");
	for( i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
			printf("%d\t",A[i][j]);
	printf("\n");
	}
	printf("MAtrix 2:\n");
	for( i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
			printf("%d\t",B[i][j]);
	printf("\n");
	}	
	printf("Matrix With Sum of Other two matrices :\n");
	for( i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			C[i][j]=A[i][j]+B[i][j];
			printf("%d\t",C[i][j]);
		}	
	printf("\n");
	}

}

