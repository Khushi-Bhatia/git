#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int vowel(char);
main()
{
	char a[25],b[25];
	int i,j=0;
	printf("enter a string :");
	gets(a);
    for(i=0;a[i]!='\0';i++)
    {
    	if(vowel(a[i])==0)
    	{
    		b[j]=a[i];
    		j++;
		}
	}
	b[j]='\0';
	printf("%s\n",b);
	
}
int vowel(char ch)
{
	if(ch=='a'|| ch=='e'||ch=='i'||ch=='o'||ch=='u')
	return 2;
	else if(ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
	return 1;
	else
	return 0;
}
