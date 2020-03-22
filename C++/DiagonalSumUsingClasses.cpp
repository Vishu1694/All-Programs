//Sum of diagonals.

#include<iostream>

using namespace std;

class DiagSum {
	int m[3][3],rdiag=0,ldiag=0;
	public:
		void get() {
			cout<<"Enter the values of Matrix below: \n";
			for(int i=0;i<3;i++){
				for(int j=0;j<3;j++){
					cout<<"m["<<(i+1)<<"]["<<(j+1)<<"]: ";
					cin>>m[i][j];
				}
			}
		}
		
		void calc() {
			for(int i=0;i<3;i++){
				for(int j=0;j<3;j++){
					if(i==j){
						rdiag+=m[i][j];
					}
					if(i+j==(3-1)){
						ldiag+=m[i][j];
					}
				}
			}
		}
		
		void display() {
			cout<<endl<<endl;
			cout<<"Right Diagonal: "<<rdiag<<endl;
			cout<<"Left Diagonal: "<<ldiag;
		}
};

int main() {
	DiagSum d;
	d.get();
	d.calc();
	d.display();
}
