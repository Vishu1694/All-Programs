//Create a class student in which student's Roll, Name, Marks of English, Physics
//And Maths are to be stored. There are two member function - getData() and putData() 
//which will take the input and display the output.
// Write the data member value file name should be 'Student'

#include<iostream>
#include<fstream>

using namespace std;

class Student
{
public:
	int Roll;
	char name[80];
	float marks_p,marks_e,marks_m;

	void getData() {
		cin>>Roll;
		cin.ignore();
		//cin.getline(name,80);
		cin>>name;
		// cin.ignore();
		cin>>marks_e>>marks_p>>marks_m;
	}

	void putData() {
		cout<<"Roll: "<<Roll<<endl;
		cout<<"Name: "<<name<<endl;
		cout<<"Marks: "<<marks_e<<", "<<marks_p<<", "<<marks_m;
	}
	
};

int main() {
	fstream FILE;
	Student s_w,s_r;
	s_w.getData();
	FILE.open("Student",ios::out|ios::binary);
	FILE.write((char *)&s_w,sizeof(s_w));
	FILE.close();
	FILE.open("Student",ios::in|ios::binary);
	FILE.read((char *)&s_r,sizeof(s_r));
	s_r.putData();
	FILE.close();
	return 0;
}