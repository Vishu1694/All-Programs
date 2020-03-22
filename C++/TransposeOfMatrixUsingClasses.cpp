//Transpose of Matrix.

#include<iostream>

using namespace std;

class Transp {
	int m[3][3],m_changed[3][3];
	public:
		void get() {
			cout<<"Enter the values of Matrix below: \n";
			for(int i=0;i<3;i++){
				for(int j=0;j<3;j++){
					cout<<"m1["<<(i+1)<<"]["<<(j+1)<<"]: ";
					cin>>m[i][j];
				}
			}
		}
		
		void Transpose() {
			for(int i=0;i<3;i++){
				for(int j=0;j<3;j++){
					m_changed[i][j]=m[j][i];
				}
			}
		}
		
		void display() {
			cout<<endl<<endl;
			for(int i=0;i<3;i++){
				for(int j=0;j<3;j++){
					cout<<m_changed[i][j]<<"\t";
				}
				cout<<endl;
			}
		}
};

int main() {
	Transp obj;
	obj.get();
	obj.Transpose();
	obj.display();
}
