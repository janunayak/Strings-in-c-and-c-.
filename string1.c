#include<stdio.h>
#include<string.h>
int main()
{
	char str[100],i=0,length;
	printf("\n enter the string:");
	gets(str);
	while(str[i]!='\0')
	{
		i=i+1;
		length =i;
		printf("\n the length of string is:%d",length);
		//i++;
		return 0;
	}
}
