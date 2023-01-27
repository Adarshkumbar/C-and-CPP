#include<stdio.h>
int main()
{
	typedef int Adi;
	Adi i,a,sum=0;
	char x=42;
	printf("*=%c",x);
	for (i=0;i<5;i++)
	{
		printf("Positive value:");
		scanf("%d",&a);
		//	break;
		continue;
		printf("sheesh");
		sum=sum+a;
	}
	//break; //error cuz not in loop or switch
	//continue;//error cuz not in loop
	printf("sum=%d",sum);

}
