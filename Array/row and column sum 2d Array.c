#include<stdio.h>
int main()
{
	int i,j,sr=0,sc=0;
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
			sr+=A[i][j];
			sc+=A[j][i];
		}
	printf("\n");
	printf("\nSum of %d row is %d\n",i,sr);
	printf("\nSum of %d column is %d\n",j,sc);	
	sr=sc=0;
	}
}
