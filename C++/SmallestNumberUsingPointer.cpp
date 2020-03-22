//Using array of pointers, Display the smallest element out of 4 numbers.

#include<iostream>
using namespace std;

int main() {
	int a[] = {2,4,6,8};								//Array of elements
	int *p[4];											//Array of pointers to store element's address
	
	/*Assigning pointer the addresses*/
	for(int i=0;i<4;i++){
		p[i] = &a[i];
	}
	/*Assigning pointer the addresses ends here*/
	
	int sm=a[0];										//Using this var to store smallest element
	
	/*Calculating smallest number from array*/
	for(int i=0;i<4;i++){
		if(*p[i]<sm){
			sm=*p[i];
		}	
	}
	/*Calculating smallest number from array ends here*/

	cout<<"Smallest Number is - "<<sm;
	return 0;
}
