//WAP to find to print fabonicci series using Recursion

#include<iostream>

using namespace std;

int main() {
	int n;
	cout<<"Enter the number of terms you want: ";
	cin>>n;
	int fab(int);
	for(int i=0;i<n;i++){
		cout<<fab(i)<<"  ";
	}
	return 0;
}

int fab(int a) {
	if(a==0){
		return 0;
	}
	else if(a==1){
		return 1;
	}
	else {
		return (fab(a-1)+fab(a-2));
	}
}
