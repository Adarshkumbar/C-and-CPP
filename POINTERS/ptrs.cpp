#include<stdio.h>
/*int main()
{
	int *p1[2],*p2;
	printf("p1 and p2 :%d %d ",p1,p2);
	int a=5,b=6;
	p1[0]=&a;
	p2=&b;
//	*p2=*p1;
	printf("a & b :%d %d",a,b);
	printf("\nAdrress of a & b :%x %x",&a,&b);
	printf("\na & b (using ptrs):%d %d",*p1,*p2);
	printf("\nAdrress of a & b(using ptr)%x %x :",p1,p2);		
}*/

//WITH NEW and ptr array 
int main()
{
	int *x=new int(2);
	printf("x=%d",*x);
	
	int *p1[2];//,*p2;
	printf("p1 and p2 :%d %d ",p1[0],p1[1]);
	int a=5,b=6;
	p1[0]=&a;
	p1[1]=&b;
//	*p2=*p1;
	printf("a & b :%d %d",a,b);
	printf("\nAdrress of a & b :%x %x",&a,&b);
	printf("\na & b (using ptrs):%d %d",*(p1[0]),*(p1[1]));
	printf("\nAdrress of a & b(using ptr)%x %x :",p1[0],p1[1]);		
}
