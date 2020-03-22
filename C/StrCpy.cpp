#include<stdio.h>
#include<string.h>
int main()
{
	char x[] = "Happy Birthday to you";
	char y[25];
	char z[15];
	strcpy(y,x);
	printf("String in x is - %s\nString in y is - %s",x,y);
	strncpy(z,x,14);
	printf("\nString in z is - %s",z);
	return 0;
}

