#include<stdio.h>
#define N 10
int main()
{
	int a[]={10,11,-1,56,57,67,5,4};
	int *p,*q;
	p=a;
	q=&a[0]+3;
	printf("%d %d %d ",(*p)++,(*p)++,*(++p));
	printf("\n%d",*p);
	printf("\n%d",(*p)++);
	printf("\n%d",(*p)++);
	q--;
	printf("\n%d",(*(q+2))--);
	printf("\n%d",*(p+2)-2);
	printf("\n%d\n",*(q++-2)-1);
	
	int i;
	for(i=0;i<(sizeof(a)/4);i++)
		printf("%d ",a[i]);
}
