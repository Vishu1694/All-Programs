#include<stdio.h>
int main()
{
	int m1[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
	int m2[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
	int i,j;
	printf("\nThe matrices are:\n\nMatrix 1:\n\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d",m1[i][j]);
			printf("\t");
		}
		printf("\n");
	}
	printf("\n\nMatrix 2:\n\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d",m2[i][j]);
			printf("\t");
		}
		printf("\n");
	}
	printf("\n\n\n\nThe sum is:\n\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d",m1[i][j] + m2[i][j]);
			printf("\t");
		}
		printf("\n");
	}
	return 0;
}
