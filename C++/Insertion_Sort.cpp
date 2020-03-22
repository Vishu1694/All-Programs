#include<iostream>

using namespace std;

int main() {
	int n,pos,key,arr[100];
	cin>>n;
	for(int i=0;i<n;i++) {
		cin>>arr[i];
	}
	for(int i=1;i<n;i++) {
		pos = i-1;
		key = arr[i];
		while(pos>=0 && arr[pos]>key) {
			arr[pos+1] = arr[pos];
			pos--;
		}
		arr[pos+1] = key;
	}
	for(int i=0;i<n;i++) {
		cout<<arr[i]<<' ';
	}
	return 0;
}