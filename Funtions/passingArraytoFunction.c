#include <stdio.h>
int fun(int list[],int n)//or(int *list,int n);
{ 
	for(int i=0;i<=n/2;i++,n--)
	{	
		int temp=list[i];
		list[i]=list[n-1];
		list[n-1]=temp;	
	}
   return  *list;
}
int main() 
{
	int A[]={10,20,30,40,50,60};
	int n=sizeof(A)/sizeof(A[2]);
	printf("Size = %d:",n);
	printf("List before reverse :\n");
	for(int i=0;i<n;i++)
		printf(" %d ",A[i]);
		
   	int x=fun(A,n);					//OR x=fun(&A[0],n);
   	
   	printf("X=%d\n",x);
	printf("\nList after reverse :\n");
	for(int i=0;i<n;i++)
		printf(" %d ",A[i]);
    return 0;
}
