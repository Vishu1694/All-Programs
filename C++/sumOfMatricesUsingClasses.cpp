//Write a program to find the sum of two matrices.

#include<iostream>

using namespace std;

class SumofM{
	int m1[3][3],m2[3][3],sum[3][3];
	public:
		void get() {
			cout<<"Enter the values of Matrix 1: \n";
			for(int i=0;i<3;i++){
				for(int j=0;j<3;j++){
					cout<<"m1["<<(i+1)<<"]["<<(j+1)<<"]: ";
					cin>>m1[i][j];
				}
			}
			cout<<"Enter the values of Matrix 2: \n";
			for(int i=0;i<3;i++){
				for(int j=0;j<3;j++){
					cout<<"m2["<<(i+1)<<"]["<<(j+1)<<"]: ";
					cin>>m2[i][j];
				}
			}
		}
		
		void calc(){
			for(int i=0;i<3;i++){
				for(int j=0;j<3;j++){
					sum[i][j]=m1[i][j]+m2[i][j];
				}
			}
		}
		
		void disSum() {
			for(int i=0;i<3;i++){
				for(int j=0;j<3;j++){
					cout<<sum[i][j]<<"\t";
				}
				cout<<endl;
			}
		}
};

int main() {
	SumofM obj;
	obj.get();
	obj.calc();
	obj.disSum();
}

