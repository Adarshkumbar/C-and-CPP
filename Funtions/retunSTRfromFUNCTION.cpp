#include<stdio.h>
#include<string.h>

//read only memory
/* char* fun()
{
	return "ADARSH";
}
*/
//read only memory
 char* fun()
{
	char *str="ADARSH";
	return str;
}

//in this fun we can change value of string in main cuz no read only
/*char* fun()
{
	char str[]="ADARSH";
	return str;
}*/
int main()
{
	char ch[10]="WHAT",*s="MEN";
	s=fun();
//	*s='B';
	//char str[]=fun(s);
	puts(s);
	puts(ch);
	printf(" %c",*s);
}
      
