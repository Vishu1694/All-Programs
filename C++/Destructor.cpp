//Destructor

#include<iostream>
using namespace std;

class ConsAndDest {
	int m1,m2,m3,m4,m5,sum=0;
	public:
	ConsAndDest(int m_1=0,int m_2=0,int m_3=0,int m_4=0,int m_5=0) {
		m1 = m_1;
		m2 = m_2;
		m3 = m_3;
		m4 = m_4;
		m5 = m_5;
		
	}
	void calc() {
		sum = m1+m2+m3+m4+m5;
		if(sum>=450)
			cout<<"Grade: A";  
		else if(sum>=400)
			cout<<"Grade: B";
		else if(sum>=350) 
			cout<<"Grade: C";
		else
			cout<<"Some other grade";
	}
	~ConsAndDest() {
		cout<<"\n\nDestructor called";
	}
};

int main() {
	ConsAndDest obj1(100,80,70,95,100);
	obj1.calc();
	return 0;
}
