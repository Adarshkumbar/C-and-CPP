#include<stdio.h>
int sum(int x,int y)
{
	return x+y;
}
int sub(int x,int y)
{
	return x-y;
}
int main()
{
	int (*ptr)(int,int);
	ptr=sum;
	printf("sum=%d\n",ptr(13,13));
	ptr=sub;
	printf("sub=%d",ptr(12,13));
	//int val=ptr(13,13);
	return 0;
}
