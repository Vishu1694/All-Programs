//Addition of two numbers and area of rectangle using pointer to data Member and pointer to
//member func

#include<iostream>
using namespace std;

class Let {
	public:
	void add(int,int);
	void calc_area(float,float);
};
 
void Let::add(int a,int b) {
	cout<<"Sum: "<<(a+b)<<endl;
}

void Let::calc_area(float m,float n){
	cout<<"Area: "<<(m*n)<<endl;
}

int main() {
	void(Let::*obj_sum)(int,int);
	obj_sum=&Let::add;
	Let l;
	(l.*obj_sum)(5,6);
	void(Let::*obj_area)(float,float);
	obj_area=&Let::calc_area;
	Let a;
	(a.*obj_area)(5.6,7.9);
	return 0;
}
