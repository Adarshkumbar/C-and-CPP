#include<stdio.h>
int main()
{
	int i,j,sum=0;
	int A[3][3],B[3][3];
	printf("Enter emts for 2d Array:\n");
	for( i=0;i<3;i++)
		for(j=0;j<3;j++)
			scanf("%d",&A[i][j]);
	
	for( i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t",A[i][j]);
			sum=sum+A[i][j];
		}
	printf("\n");
	}
	printf("Sum=%d",sum);
	printf("\nTranspose of MAtrix :\n");
	sum=0;
	for(j=0;j<3;j++)
	{
		for(i=0;i<3;i++)
		{
			B[i][j]=A[i][j];
			printf("%d\t",B[i][j]);	
		}
	printf("\n");
	}
}

