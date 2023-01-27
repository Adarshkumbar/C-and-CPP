#include<stdio.h>
#define MAX(a,b) if (a>b) \
		printf("%d is MAX\n",a);\
		else\
		printf("%d is MAX\n",b);
#define MUL(a,b) a*b
//#define DATE printf("%s"__DATE__);
int main()
{
	MAX(10,5);
	printf("MUL=%d",MUL(10,5));
	printf("\nDATE =%s",__DATE__);
	printf("\nTIME =%s",__TIME__);
	printf("\nLINE =%d",__LINE__);
	printf("\nANSI C =%d",__STDC__);
	printf("\nFILE =%s",__FILE__);
}

