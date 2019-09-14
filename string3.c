#include<stdio.h>
#include<string.h> //Append a string to another string.

int main()
{
	char dest_str[50],sour_str[50];
	printf("\n enter the source string:");
	gets(sour_str);
	printf("\n enter the destination string:");
	gets(dest_str);
	int i=0,j=0;
	while(dest_str[i]!='\0')
	i++;
	while(sour_str[j]!='\0')
	{
		dest_str[i]=sour_str[j];
		i++;
		j++;
	}
	dest_str[i]='\0';
	printf("\n after appending,destination string is:");
	puts(dest_str);
}
