#include<stdio.h>
int main()
{
	int i = 12;
	float f = 2.34;
	char ch = (char)83;
	void *ptr;
	ptr = &i;
	printf("Value of i = %d",*(int*)ptr);
	ptr = &f;
	printf("Value of f = %.2f",*(float*)ptr);
	ptr = &ch;
	printf("Value of ch = %d",*(int*)ptr);
	return 0;
}
