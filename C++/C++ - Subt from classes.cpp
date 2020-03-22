#include<iostream>

using namespace std;

class Subt {
	int num1,num2;
	void input() {
		cout<<"Enter the values : ";
		cin>>num1>>num2;
	}
	public:
	int calc() {
		input();
		return num1-num2;	
	}
};

int main() {
	Subt s;
	int res = s.calc();
	cout<<"The result is : "<<res;
	return 0;
}
