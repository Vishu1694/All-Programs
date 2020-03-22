//Area of /_\ using default args.

#include<iostream>

using namespace std;

float area(float h=0.0,float b=0.0) {
	return 0.5*h*b;
}

int main() {
	float ht,bs;
	cout<<"Enter the value of height and base with a space: ";
	cin>>ht>>bs;
	cout<<endl<<endl<<"No Base and Height provided: "<<area();
	cout<<endl<<"Only height provided: "<<area(ht);
	cout<<endl<<"Both height and base provided: "<<area(ht,bs);
	return 0;
}
