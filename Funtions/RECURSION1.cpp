#include<stdio.h>
int fact(int n)
{
	if (n<=1)
		return 1;
	else 
		return n*fact(n-1);
}
int main()
{	
	int n;
	printf("Enter n:");
	scanf("%d",&n);
	n=fact(n);
	printf("Fact=%d",n);
	return 0;	
}
