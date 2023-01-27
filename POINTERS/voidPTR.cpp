#include<stdio.h>//we can type cast to alr present non void ptr
int main()
{
	char c='A';
	int i=69,b=88;
	float f=420.69;
	void *p=NULL;
	p=&c;
	printf("c=%c\n",*(char*) p);
	p=&i;
	printf("i=%d\n",*(int *)p);
	p=&f;
	printf("f=%f\n",*(float *)p);
}
