//Program to count number of occurances of a specific elements

#include<iostream>

using namespace std;

class Search {
	int a[10],n,count=0;
	public:
		
		void get() {
			cout<<"Enter the values below:\n";
			for(int i=0;i<10;i++)
				cin>>a[i];
		}
		
		void searcharray() {
			cout<<"Enter element to be searched : ";
			cin>>n;
			for(int i=0;i<10;i++){
				if(a[i]==n){
					count++;
					cout<<"Element found at location : "<<(i+1)<<endl;
				}
			}
			cout<<"The occurance of element is "<<count;
			cout<<" number of times.";
		}
		
		void display() {
			for(int i=0;i<10;i++)
				cout<<a[i]<<endl;
		}
		
};

int main() {
	Search ob;
	ob.get();
	ob.display();
	ob.searcharray();
}
