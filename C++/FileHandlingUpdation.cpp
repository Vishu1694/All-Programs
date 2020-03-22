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
		cout<<endl<<"Roll: "<<Roll<<endl;
		cout<<"Name: "<<name<<endl;
		cout<<"Marks: "<<marks_e<<", "<<marks_p<<", "<<marks_m;
	}
	
};

int main() {
	int i;
	fstream FILE;
	Student s_w[5],s_r[5],nd;
	FILE.open("Student2",ios::ate|ios::out|ios::binary);
	for(i=0;i<5;i++) {
		s_w[i].getData();
		FILE.write((char *)&s_w[i],sizeof(s_w[i]));
	}
	int RTR;
	cin>>RTR;
	FILE.seekp((RTR-1)*sizeof(s_w[i]));
	nd.getData();
	FILE.write((char *)&nd,sizeof(s_w[i]));
	FILE.close();
	FILE.open("Student2",ios::in|ios::binary);
	for(int i=0;i<5;i++) {
		FILE.read((char *)&s_r[i],sizeof(s_w[i]));
		s_r[i].putData();
	}
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
3
33
Shubhi Bhandari
100.0 100.0 100.0



OUTPUT:


Roll: 59
Name: Vishal Tiwari
Marks: 100, 100, 100
Roll: 49
Name: Anshul
Marks: 100, 100, 100
Roll: 33
Name: Shubhi Bhandari
Marks: 100, 100, 100
Roll: 53
Name: Sudhangini
Marks: 100, 100, 100
Roll: 58
Name: Himanshu
Marks: 100, 100, 100
*/