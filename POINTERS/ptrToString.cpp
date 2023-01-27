#include<stdio.h>
int main()
{
	char str[]="Welcome to the jungle";
	char *ptr=str;
	printf("\n%c",*ptr);
	printf("\n%c",*(ptr+++1));
	printf("\n%c",*((ptr--+5)-1)+3);
	printf("\n%c",*(++ptr+10)-32);
	printf("\n%c %c %c ",*ptr,*++ptr,*--ptr);
}
