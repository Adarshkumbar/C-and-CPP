#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef enum Case{Add=1,Sub,Mul,Div,Mod}C;
int main()
{
	int ch,a,b;
	while(1)
	{
	printf("\nEnter 2 numbers:");
	scanf("%d%d",&a,&b);
	printf("1.ADD\n2.Sub\n3.Mul\n4.Div\n5.Mod\n");
	scanf("%d",&ch);
	switch(ch)
	{
		case Add:printf("SUM=%d",a+b);
				break;
		case Sub:printf("Sub=%d",a-b);
				break;
		case Mul:printf("Mul=%d",a*b);
				break;
		case Div:if(b==0)
				{
					printf("Infinity");
					break;
				}
				else
					printf("Div=%d",a/b);
				break;
		case Mod:if(b==0)
				{
					printf("Infinity");
					exit(0);
				}
				else
				printf("Mod=%d",a%b);
				break;
		default:printf("Enter valid opt");
	}	
}
}
