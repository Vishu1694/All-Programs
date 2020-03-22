//Using Pointer to Object find the SI.

#include<iostream>
using namespace std;

class SI {
	int p,r,t;
	float si;
	public:
		void get_data() {
			cout<<"\nEnter the values of principal, rate and time: \n";
			cin>>p>>r>>t;
		}
		
		void calc() {
			si = (p*r*t)/100;
		}
		
		void show_data() {
			cout<<"SI is : "<<si;
		}
};

int main() {
	SI obj;
	SI *ptr;
	ptr = &obj;
	ptr->get_data();
	ptr->calc();
	ptr->show_data();
	return 0;
}
