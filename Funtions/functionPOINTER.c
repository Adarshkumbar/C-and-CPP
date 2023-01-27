#include<stdio.h>
void sum(int a,int b)
{
	printf("\n%d",a+b);
}
int main()
{
	void(*fptr)(int ,int);	//function pointer
	fptr=&sum;
	sum(10,20);			//fun call 
	fptr(10,20); 		//fun call by function ptr 
}
