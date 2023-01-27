#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define VAR "SNVNVWNVW"
//enum Days{xd,ff};
 typedef enum days{mon,tue,wed,thur,fri,sat,sun}D;
 

int main()									//We cant print names like mon ,tue etc ca only print their posi value 0,1,2 etc dirctly
{
	printf("macro=%c",254);
	//printf("sizeof(VAR):%d %d",sizeof(VAR),strlen(VAR));
	//enum Days d=xd;
/*	printf("\n%d\n",d);
	D=tue;
	char tue='!';
	printf("%c\tD=%d\n",33,D);
	D=mon;
	printf("D=%c",(sun));*/
	for(int i=0;i<7;i++)
	{
		D d=sun;
		printf("\nD=%d",d);
	}
}
