#include<stdio.h>
#include<string.h>
int main()
{
	int i;
	char str1[100],str2[100]="";
	printf("Enter the string -> ");
	gets(str1);
	for(i=0;i<100;i++)
	{
		if(str1[i]!='\0')
		{
			str2[i] = str1[i];
		}
		else
		{
			break;
		}
	}
	str2[++i] = '\0';
	printf("\nCopied String -> %s",str2);
}
