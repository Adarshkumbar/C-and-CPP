#include<stdio.h>
int main()
{
	int n;
//	printf("Enter for n :");
//	scanf("%d",&n);
	int a[5],b[5],c[5],i;
	printf("size of n:%d",sizeof(a));
	printf("\nEnter values:");
	for(i=0;i<5;++i)
		scanf("%d",&a[i]);		
	printf("Enter 5 random integer numbers:");
	for(i=0;i<5;++i)
		scanf("%d",&b[i]);		
	for(i=0;i<5;++i)
	{
		c[i]=a[i]+b[i];
		printf("\n%d\t",c[i]);
	}
}
