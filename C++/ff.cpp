//Write a program to copy data from one file to other

#include<iostream>
#include<fstream>

using namespace std;


int main() {
	fstream obj3("From",ios::out);
	obj3<<"Vishal";
	obj3.close();
	fstream obj1("From",ios::in);
	fstream obj2("To",ios::out);
	char ch;
	if(!obj1) {
		cout<<"File couldn't be found";
		exit(1);
	}
	ch=obj1.get();
	while(obj1) {
		obj2.put(ch);
		ch=obj1.get();
	}
	cout<<"\n\nData Copied";
	return 0;
}