#include<stdio.h>
void add(int a,int b)
{
	printf("sum=%d",a+b);
}
void sub(int a,int b)
{
	printf("sum=%d",a-b);
}
void mul(int a,int b)
{
	printf("sum=%d",a*b);
}
void div(int a,int b)
{
	printf("sum=%d",a/b);
}
int main()
{
	int i,ch,a,b;
	while(1)
	{
	void (*ptr[4])(int ,int)={add,sub,mul,div};
	printf("1:Add\n2:Sub\n3:Mul\n4:Div\n5:Exit\nEnter your choice:");
	scanf("%d",&ch);
	if(ch>4 && ch<1)
		printf("invalid entry!!");
	if(ch==5)
		break;
	printf("\nEnter a and b:");
	scanf("%d %d",&a,&b);
	ptr[--ch](a,b);
	printf("\n");
	}
}
