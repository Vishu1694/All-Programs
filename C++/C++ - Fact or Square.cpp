#include<iostream>

using namespace std;

class Check {
	int num;
	public:
	int evencheck() {
		if(num%2==0)
			return 1;
		else
			return 0;
	}
	int input() {
		cout<<"Enter the number : ";
		cin>>num;
	}
	int fact() {
		int res=1;
		for(int i=1;i<=num;i++) {
			res *= i;
		}
		return res;
	}
	int square() {
		return (num*num);
	}
};

int main() {
	Check c;
	int result;
	c.input();
	if(c.evencheck()==1) {
		result = c.fact();
	}
	else {
		result = c.square();
	}
	cout<<"The result is : "<<result;
}
