//Take a function with name volume which will calc volume of cylinder, cube and cuboid.

#include<iostream>
#include<math.h>

using namespace std;

float volume(int side) {
	return pow(side,3);
}

float volume(float a,float b,float c) {
	return a*b*c;
}

float volume(float r,float h) {
	return 3.14*r*r*h;
}

int main() {
	cout<<"Volume(Cube): "<<volume(10)<<endl;
	cout<<"Volume(Cuboid): "<<volume(10,10,10)<<endl;
	cout<<"Volume(Circle): "<<volume(10,10)<<endl;
	return 0;
}
