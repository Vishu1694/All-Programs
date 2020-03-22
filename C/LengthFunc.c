#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	int i,countLen=0;
	char ch[100];
	printf("Enter the String -> ");
	gets(ch);
	for(i=0;i<100;i++)
	{
		if(ch[i]=='\0')
			break;
		else
			countLen++;
	}
	printf("Length of String is - %d",countLen);
	return 0;
}
