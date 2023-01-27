#include <stdio.h>
void fun(char *list,int n)//or(int list[],int n);
{ 
	for(int i=0;i<n;i++)
	{
		list[i]='A';
	}
//	return list;
}
int main()
{
	int n;
	char str[]="ADARSH";
	n=sizeof(str)/sizeof(str[1]);
	printf("Before Fun:%s\n and size :%d",str,n);
	fun(str,n);				//or fun(&str[0],n);
	printf("After Fun:%s",str);
}
