//Write a program to input Student name,...... in Student class and write
//the record in file name source.txt then read the same record
//from the file and display on screen

#include<iostream>
#include<fstream>
#include<stdio.h>

using namespace std;

class Student {
	char name[30];
	int roll;
	float marks[3];
	public:
		void getData() {
			gets(name);
			cin>>roll;
			for(int i=0;i<3;i++) {
				cin>>marks[i];
			}
		}
		void putData() {
			cout<<"Name: "<<name<<endl;
			cout<<"Roll: "<<roll<<endl;
			cout<<"Marks: ";
			for(int i=0;i<3;i++) {
				cout<<marks[i];
				cout<<" ";
			}
		}
};

int main() {
	Student s1;
	fstream obj("Student_Data",ios::out);
	char ch;
	while(s1) {
		ch = s1.get();
		obj.put(ch);
	}
	cout<<"Data Copied";
}

