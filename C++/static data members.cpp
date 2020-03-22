#include<iostream>

using namespace std;

class PQR {
	int a;
	static int b;
	public:
		void get() {
			a = 10;
		}
		void count() {
			a = b+8;
			b+=10;
			cout<<a--;
			cout<<",";
			b-=5;
			cout<<b--;
			cout<<endl;
		}
		void display() {
			cout<<a<<","<<b<<endl;
		}
};
int PQR::b=0;

int main() {
	PQR ob,obj;
	ob.get();
	obj.get();
	ob.count();
	obj.count();
	ob.count();
	ob.display();
	obj.display();
	return 0;
}
