#include<iostream>

using namespace std;

class SHAPE {
	float area,rad,len,bre,h,b;
	void in()
	{
		cout<<"Enter the value of radius, length, breadth, height, base : ";
		cin>>rad>>len>>bre>>h>>b;
	}
	friend float circle(SHAPE);
	friend float rectangle(SHAPE);
	friend float triangle(SHAPE);
};

float circle(SHAPE obj) {
	obj.in();
	obj.area = 3.14*obj.rad*obj.rad;
	return obj.area;
}

float rectangle(SHAPE obj) {
	obj.in();
	obj.area = obj.len * obj.bre;
	return obj.area;
}

float triangle (SHAPE obj) {
	obj.in();
	obj.area = 0.5 * obj.b * obj.h;
	return obj.area;
	}
	
int main() {
	SHAPE OBB;
	int choice;
	cout<<"Choose:\n1.Circle\n2.Rectangle\n3.Triangle";
	cin>>choice;
	switch(choice) {
		case 1: 
			cout<<"Enter the value of radius : ";
			cout<<"Area: "<<circle(OBB);
			break;
		case 2: 
			cout<<"Enter the value of length and breadth : ";
			cout<<"Area: "<<rectangle(OBB);
			break;
		case 3: 
			cout<<"Enter the value of height and base : ";
			cout<<"Area: "<<triangle(OBB);
			break;
	}
	return 0;	
}
