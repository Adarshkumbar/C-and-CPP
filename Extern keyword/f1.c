#include<stdio.h>
//extern int x;
void fun()
{
	extern int x;
	printf("HELLO FROM F1\n");
	//printf("x=%d\n",x);
	 int y=x;
	printf("y=%d",y);
}
