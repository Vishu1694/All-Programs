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
		cin.getline(name,80);
		cin>>marks_e>>marks_p>>marks_m;
	}

	void putData() {
		cout<<"Roll: "<<Roll<<endl;
		cout<<"Name: "<<name<<endl;
		cout<<"Marks: "<<marks_e<<", "<<marks_p<<", "<<marks_m;
	}
	
};

int main() {
	int i;
	fstream FILE;
	Student s_w[5],s_r;
	FILE.open("Student1",ios::out|ios::binary);
	for(i=0;i<5;i++) {
		s_w[i].getData();
		FILE.write((char *)&s_w[i],sizeof(s_w[i]));
	}
	FILE.close();
	int RTR;
	cin>>RTR;
	FILE.open("Student1",ios::in|ios::binary);
	FILE.seekg((RTR-1)*sizeof(s_w[i]));
	FILE.read((char *)&s_r,sizeof(s_w[i]));
	s_r.putData();
	FILE.close();
	return 0;
}

/*INPUT:

59
Vishal Tiwari
100.0 100.0 100.
49
Anshul
100.0 100.0 100.0
33
Shubhi Bhandara
100.0 100.0 100.0
53
Sudhangini
100.0 100.0 100.0
58
Himanshu
100.0 100.0 100.0
1



OUTPUT:

Roll: 59
Name: Vishal Tiwari
Marks: 100, 100, 100
*/