#include<stdio.h>
void BubbleSort_asc(int a[],int size)
{
	int pass,hold,i;
	for(pass=1;pass<size;pass++)
	{
		for(i=0;i<size-1;i++)
		{
			if(a[i]>a[i+1])
			{
				hold = a[i];
				a[i] = a[i+1];
				a[i+1] = hold;
			}
		}
	}
	printf("Array after sorting - ");
	for(i=0;i<size;i++)
		printf("%d, ",a[i]);
}
void BubbleSort_dsc(int a[],int size)
{
	int pass,hold,i;
	for(pass=1;pass<size;pass++)
	{
		for(i=0;i<size-1;i++)
		{
			if(a[i]<a[i+1])
			{
				hold = a[i];
				a[i] = a[i+1];
				a[i+1] = hold;
			}
		}
	}
	printf("Array after sorting - ");
	for(i=0;i<size;i++)
		printf("%d, ",a[i]);
}
int main()
{
	int size,i,choice;
	printf("Enter the size of array - ");
	scanf("%d",&size);
	int arr[size];
	printf("\n\nEnter %d elements below,\n\n",size);
	for(i=0;i<size;i++)
		scanf("%d",&arr[i]);
	printf("\n\nThe elements are - \n");
	for(i=0;i<size;i++)
		printf("%d, ",arr[i]);
	there:printf("\n\nEnter 1 for Ascending Order\nEnter 2 for Descending Order\n\nEnter your choice - ");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:BubbleSort_asc(arr,size);
		break;
		case 2:BubbleSort_dsc(arr,size);
		break;
		default:printf("Wrong choice, try again\n\n");
		goto there;
	}
}
