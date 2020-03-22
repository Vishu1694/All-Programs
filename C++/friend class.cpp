//Write a program to swap the data of class PQR through friend class MNW 

#include<iostream>

using namespace std;

class MNW;
class PQR {
	int a,b,c;
	public:
	void in(){
		cout<<"Enter the values of a and b:";
		cin>>a>>b;
		cout<<"Before swapping:\na:"<<a<<"\nb:"<<b;
	}
	void print(){
		cout<<"\n\nAfter swapping:\na:"<<a<<"\nb:"<<b;
	}
	friend class MNW;
};

class MNW {
	public:
	void swap(PQR ob){
		ob.in();
		ob.c=ob.a;
		ob.a=ob.b;
		ob.b=ob.c;
		ob.print();
	}
};

int main(){
	PQR objp;
	MNW obja;
	obja.swap(objp);
	return 0;
}

