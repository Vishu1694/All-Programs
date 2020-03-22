//Area of Circle using classes and default args.

#include<iostream>

using namespace std;

class AreaC {
	float pi=3.14;
	public:
		float area(float radius=0.0) {
			return pi*radius*radius;
		}
};

int main() {
	int r;
	cout<<"Enter the radius of circle: ";
	cin>>r;
	AreaC obj;
	cout<<"\n\nWithout Args: "<<obj.area();
	cout<<"\nWith Radius="<<r<<" : "<<obj.area(r);
	return 0;
}
