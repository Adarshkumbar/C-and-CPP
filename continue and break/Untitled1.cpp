#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
	char x,a='a';
	int j,b=258,n=20;
	do
	{
		printf("%d",a);

	}while(a!='a')
	;
	
	while(a<='z')
	{
		printf("%c\t",a);
		a++;
	}	for(j=1;j<=10;j++)
		printf("%d*%d=%d\n",n,j,n*j);
 printf("Enter something :");
	scanf("%c",&x);
	printf("%d\n",x);
	if(x>=65 && x<=90)
		printf("Upper case");
	else if(x>=97 && x<=122)
		printf("LowerA case");
	else if(x>=48&&x<=57)
		printf("Number");
	else 
		printf("invalid");
	switch(1)
	{
		case 1:printf("\nyyo");
	break;
		default:printf("\ndefault");
	}


		return 0;
}
