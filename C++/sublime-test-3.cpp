//Question here

#include<iostream>
#include<fstream>

using namespace std;

class FileHand {
	char name[30];
	int roll;
	float marks;
	public:
		void getData() {
			cin>>name>>roll>>marks;
		}
		void putData() {
			cout<<"Name: "<<name<<endl;
			cout<<"Roll: "<<roll<<endl;
			cout<<"Marks: "<<marks<<endl;
		}
};

int main() {
	FileHand ob1,ob2;
	ob1.getData();
	fstream file("Data",ios::in|ios::out|ios::binary);
	file.write((char*)ob1,sizeof(ob1));
	file.seekg(0);
	file.read((char*)ob1,sizeof(ob1));
	return 0;
}