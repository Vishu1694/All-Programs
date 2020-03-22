//WAP to find sum of digits using recursion

#include<iostream>
using namespace std;

int main() {
	int sumn(int);
	int n;
	cout<<"Enter the number: ";
	cin>>n;
	cout<<sumn(n);
	return 0;
}

int sumn(int n) {
	if(n<=9)
		return n;
	else
		return n%10+sumn(n/10);
} 
