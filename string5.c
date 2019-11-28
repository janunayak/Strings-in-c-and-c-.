#include<stdio.h>
int main()
{
	char s[20];               //count the total no of alaphabets,digits and special characters in a string.
	scanf("%s",s);
	int i,count=0,count1=0,count2=0;
	for(i=0;s[i]!='\0';i++)
	{
		if((s[i]>='A' && s[i]<='Z')||(s[i]>='a' && s[i]<='z'))
		{
			count++;
			
		}
		if(s[i]>=0 && s[i]<=9)
		{
			count1++;
		}
		else
		{
			count2++;
		}
	}
	printf("\n alaphabets:%d",count);
	printf("\n digits:%d",count1);
	printf("\n special:%d",count2);
	
}
