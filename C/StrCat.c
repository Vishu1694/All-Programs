#include<stdio.h>
#include<string.h>
int main()
{
	char x[] = "Happy Birthday to you";
	char y[] = " Vishal";
	char z[80];
	printf("\nString x before - %s",x);
	strcat(x,y);
	printf("\n\nString x after - %s",x);
	return 0;
}
