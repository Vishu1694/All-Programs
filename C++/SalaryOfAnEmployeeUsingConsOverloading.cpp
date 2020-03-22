//Write a program using Cons Overloading to find the total salary of the employee.
//Formula  -->  Total Salary = Basic Pay + HRA + TA + DA

#include<iostream>

using namespace std;

class Salary {
	public:
	int total_Salary,BPay,hra,ta,da;
		Salary() {
			BPay = 60000;
			hra = 0.15*BPay;
			ta = 0.5*BPay;
			da = 0.0225*BPay;
		}
		
		Salary (int B,int h,int t,int d) {
			BPay = B;
			hra = h;
			ta = t;
			da = d;
		}
		
		int calcSal() {
			total_Salary = BPay+hra+ta+da;
		}
};

int main() {
	Salary obj1;
	Salary obj2(50000,200,100,50);
	obj1.calcSal();
	obj2.calcSal();
	cout<<obj1.total_Salary<<endl;
	cout<<obj2.total_Salary<<endl;
	return 0;
}
