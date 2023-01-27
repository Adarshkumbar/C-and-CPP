#include<Stdio.h>
 //int x=10;
int main()					// even tho x initialised at last we get O/P cuz of extern
{		
	extern int x;
	
	extern void fun();		// even tho fun not declared or defined before we get O/P cuz of extern
	printf("val of x=%d",x);	
	fun();
}
  int x=10;
void fun()
{
	printf("\nHello");
}
