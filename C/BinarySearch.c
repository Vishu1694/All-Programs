#include<stdio.h>

//Make sure the array is sorted.

int Binary_Search(int arr[], int h, int to_Search)
{
  int l=0,m;
  while(l <= h)
  {
    m = (l+h)/2;
    if(to_Search > arr[m])
      l = m+1;
    else if(to_Search < arr[m])
      h = m-1;
    else
      return m;
  }
  return -1;
}
int main()
{
  int n,i,toSearch,arr[100],l=0,m;
  printf("Enter the size of array - ");
  scanf("%d",&n);
  printf("\n\nEnter the elements below,\n");
  for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
  printf("\n\nEnter the element to search - ");
  scanf("%d",&toSearch);
  /*if(Binary_Search(arr,n,toSearch)==-1)
  {
  	printf("\nElement not found.");
  	return 0;
  }
  printf("\nElement found at position - %d",Binary_Search(arr,n,toSearch)+1);*/
  while(l<=n)
  {
  	m = (l+n)/2;
  	if(m>toSearch)
  		l = m+1;
  	else if(m<toSearch)
  		n = m_1;
  	else
  		printf("Element found at position %d",m);
  }
  return 0;
}
