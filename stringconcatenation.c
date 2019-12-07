#include<stdio.h>
#include<string.h>
int main()
{
    char s1[20];
    char s2[20];
    scanf("%s%s",&s1,&s2);
    int x,y;
    x=strlen(s1);
    y=strlen(s2);
    if(x>y)
    printf("%d\n",x);
    else
    printf("%d\n",y);
    int i=0,j;
    while(s1[i]!='\0')
    {
        i++;
    }
        for(j=0;s2[j]!='\0';j++)
        {
            s1[i]=s2[j];
            i++;
        }
  s1[i]='\0';
    printf("%d\n",s1);
    return 0;
}
