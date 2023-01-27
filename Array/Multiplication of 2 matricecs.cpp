#include<stdio.h>
#define N 10
int main()
{
	int i,j,k,sum=0,n,m,p,q;
	int A[N][N],B[N][N],C[N][N];
	printf("Size of 1st  Matrix:");
	scanf("%d%d",&m,&n);
	
	printf("Enter emts for 1st Array:\n");
	for( i=0;i<m;i++)
		for(j=0;j<n;j++)
			scanf("%d",&A[i][j]);
	
	printf("Size of 2nd Matrix:");
	scanf("%d%d",&p,&q);
	
	printf("Enter emts for 2nd Array:\n");
	for( i=0;i<p;i++)
		for(j=0;j<q;j++)
			scanf("%d",&B[i][j]);	
	
	printf("\nMatrix 1 :\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
			printf("%d\t",A[i][j]);	
	printf("\n");
	}
	printf("\nMatrix 2:\n");
	for(i=0;i<p;i++)
	{
		for(j=0;j<q;j++)
			printf("%d\t",B[i][j]);	
	printf("\n");
	}
	
	if(n!=p)
	{
		printf("!!!Cant Multipply!!!");
	}
	else
	{
	for(i=0;i<m;i++)
	{
		for(j=0;j<q;j++)
		{
			for(k=0;k<m;k++)
				sum=sum+(A[i][k]*B[k][j]);
			C[i][j]=sum;
			sum=0;
		}	
	}
	printf("m=%d n=%d p=%d q=%d ",m,n,p,q);
	printf("\nProduct of MAtrices:\n");
	
	for(i=0;i<m;i++)
	{
		for(j=0;j<q;j++)
			printf("%d\t",C[i][j]);	
	printf("\n");
	}
	}
}
