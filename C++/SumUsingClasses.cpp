//Find the sum of even elements in array of 10 using pointer within a class.

#include<iostream>
using namespace std;

class ArrCalc {
	int *p;
	int sum;
	public:
		void get_data();
		void get_sum();
		void display_data();
};

void ArrCalc::get_data() {
	cout<<"Enter 10 values: \n";
	p = new int[10];
	for(int i=0;i<10;i++)
		cin>>p[i];
}

void ArrCalc::get_sum() {
	sum=0;
	for(int i=1;i<10;i+=2)
		sum+=p[i];
}

void ArrCalc::display_data() {
	cout<<endl<<endl;
	cout<<sum;
}

int main() {
	ArrCalc a;
	a.get_data();
	a.get_sum();
	a.display_data();
	return 0;
}
