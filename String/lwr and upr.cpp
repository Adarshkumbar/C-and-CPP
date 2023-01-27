#include <stdio.h>
#include<string.h>
int main()
{
	int i;
	char name1[20]name2[20];
	gets(name1);
	for(i=0;name1[i]!='\0';i++)
	{	
		if(name1[i]>='A'&&name1[i]<='Z')
			name1[i]=name1[i]+32;
	}
	printf("Lower case is :%s\n",name1);
	
	gets(name2);
	for(i=0;name2[i]!='\0';i++)
	{	
		if(name2[i]>='a'&&name2[i]<='z')
			name2[i]=name2[i]-32;
	}
	printf("\nUpper case is :%s",name2);
}
