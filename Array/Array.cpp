#include<stdio.h>
#define N 3
int main()
{
/*	int x=10;
	double a[4]={10,20,30,40};
	printf("\n\n%d\n\n",a[0]);
	printf("\n\n%d\n\n",a);	*/
	int i,a[5];
	for(i=0;i<5;i++)
		scanf("%d",&a[i]);
	for(i=4;i>=0;i--)
		{
		printf("%d\t",a[i]);
		}
	int b[10];
	int c[]={};
	int d[]={1,3};
	int e[N];
	printf("c=%d\n",c[0]);
	printf("d1=%d\n",d[0]);
	printf("d2=%d\n",d[1]);
	printf("d3=%d\n",d[2]);
	
	for(i=0;i<3;i++)
		printf("e%d=%d\t",i,e[i]);
}
