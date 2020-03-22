#include<stdio.h>
int main()
{
	int b[] = {1,2,3,4};
	int *bptr;
	bptr = &b[0];
	int sum = 0,i;
	printf("Using pointer : ");
	for(i=0;i<4;i++)
		sum = sum + *(bptr+i);
	printf("%.1f\n\n",sum/4.0);
	sum=0;
	printf("Using Array Name as pointer : ");
	for(i = 0;i<4;i++)
		sum += *(b+i);
	printf("%.1f",sum/4.0);
	return 0;
}
