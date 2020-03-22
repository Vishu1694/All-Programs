#include<iostream>
using namespace std;
int main() {
	int a=5;
	int *p,**p1;
	p=&a;
	p1=&p;
	cout<<a<<"-"<<a<<endl;
	cout<<p<<"-"<<*p<<endl;
	cout<<p1<<"-"<<**p1<<endl;
}

/* 
OUTPUT OF DIFFERENT QUES

*/


