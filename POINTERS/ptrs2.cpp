#include<stdio.h>
int main()
{
	int a=9,*p1,**p2,***p3;
	p1=&a;
	p2=&p1;
	p3=&p2;
	***p3=10;
	printf("a:%d\n",a);
	printf("p1:%d\n",&p1);
	printf("p2:%d\n",p2);
	printf("p3:%d\n",*p3);	
}
