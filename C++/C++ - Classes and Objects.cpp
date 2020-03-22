#include<iostream>

using namespace std;

class Addition {
	int num1,num2;
	public:
	void input();
	void output();
};

void Addition::input() {
	cout<<"Enter two numbers : ";
	cin>>num1>>num2;
}

void Addition::output() {
	cout<<"\n\nThe sum is : "<<(num1+num2);
}

int main() {
	Addition add;
	add.input();
	add.output();
}
