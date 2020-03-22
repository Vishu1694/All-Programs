#include<iostream>
#include<fstream>
#include<String.h>

using namespace std;

class ToDoList {
	
	public:
	int ifdone;
	char title[80];
	
	

	void add() {
		gets(title);
		cin>>ifdone;
	}

	void show() {
		cout<<title<<"\t";
		if(ifdone==1) {
			cout<<"Done"<<endl;
		}
		else if(ifdone==0) {
			cout<<"Not Done"<<endl;
		}
	}
};
//

int main() {
	int n;
	char ch;
	fstream file;
	cout<<"This program stimulates a ToDoList\nChoose from below:\n\n";
	cout<<"1.Add ToDo\n2.Delete ToDo\n3.Show All ToDos with status\n0.Exit\n\n\n";
	ToDoList t;
	do {
		cout<<"Choose:\n\n";
		cin>>n;
		switch(n) {
			case 0: exit(0);
				break;
			case 1: file.open("ToDoList.txt",ios::out|ios::app);
					t.add();
					file.write((char*)&t,sizeof(ToDoList));
					file.close();
					break;
			case 3: cout<<"Title\tStatus\n";
					file.open("ToDoList.txt",ios::in);
					while(file) {
						file.read((char *)&t,sizeof(t));
						t.show();
					}
					file.close();
					break;
			default: cout<<"Wrong choice...";
		}
		cout<<"\nWould you like to operate again?(y/n)";
		cin>>ch;
	} while(ch=='y'||ch=='Y');
}