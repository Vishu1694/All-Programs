#include<iostream>

using namespace std;

class SI {
	float p,r,t,si,a;
	public:
		SI(){
			p=1000.0;
			r=10.0;
			t=1;
		}
		SI(float prin,float rate,float time) {
			p=prin;
			r=rate;
			t=time;
		}
		SI(SI &ob) {
			p=ob.p;
			r=ob.r;
			t=ob.t;
		}
		float calc() {
			return (p*r*t)/100;
		}
};

int main() {
	SI ob1;
	SI ob2(5000.0,7.5,2);
	SI ob3(ob2);
	cout<<ob1.calc()<<endl;
	cout<<ob2.calc()<<endl;
	cout<<ob3.calc()<<endl;
	return 0;
}
