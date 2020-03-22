//Write a program to copy data from one file to other

#include<iostream>
#include<fstream>

using namespace std;


int main() {
	fstream obj1("From.txt",ios::in);
	fstream obj2("To.txt",ios::out);
	char ch;
	if(!obj1) {
		cout<<"File couldn't be found";
		exit(1);
	}
	ch=obj1.get();
	while(obj2) {
		obj2.put(ch);
		ch=obj1.get();
	}
	cout<<"\n\nData Copied";
	return 0;
}