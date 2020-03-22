#include<iostream>
#include<fstream>

using namespace std;

int main() {
	int marks[] = {1,2,3,4,5,6,7,8,9,10,11,12};
	int arr[30] = {0};
	fstream FILE;
	FILE.open("temp", ios::app|ios::binary);
	FILE.write((char *)marks,sizeof(marks));
	FILE.close();
	FILE.open("temp",ios::in|ios::binary);
	FILE.read((char *)arr,sizeof(marks));
	cout<<"Marks Obt: \n";
	for(int i=0;i<30;i++) {
		cout<<"  "<<arr[i];
	}
	FILE.close();
	return 0;
}

