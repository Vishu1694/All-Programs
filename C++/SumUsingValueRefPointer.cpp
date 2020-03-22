//Sum using call by value, ref and address.

#include<iostream>

using namespace std;

int UsingValue(int a, int b){
	return a+b;		
}

int UsingRef(int &a, int &b) {
	return a+b;
}

int UsingPointer(int *a, int *b) {
	return *a+*b;
}

int main() {
	int x=10,y=5;
	cout<<"Pass by value: "<<UsingValue(x,y)<<endl;
	cout<<"Pass by Reference: "<<UsingRef(x,y)<<endl;
	cout<<"Pass by Address: "<<UsingPointer(&x,&y)<<endl;
	return 0;
} 


