#include<iostream>

using namespace std;

char m[3][3];

void show_status() {
	cout<<"_"<<m[0][0]<<"_|_"<<m[0][1]<<"_|_"<<m[0][2]<<"_"<<endl;
	cout<<"_"<<m[1][0]<<"_|_"<<m[1][1]<<"_|_"<<m[1][2]<<"_"<<endl;
	cout<<" "<<m[2][0]<<" | "<<m[2][1]<<" | "<<m[2][2]<<" "<<endl;
	cout<<endl<<endl;
}

int xcheck() {
	int flag=1;
	for(int i=0;i<3;i++) {
		flag = 1;
		for(int j=0;j<3;j++) {
			if(m[i][j]!='X'||m[i][j]!='x') {
				flag=0;
				break;
			}
		}
		if(flag==1)
			return flag;
	}

	for(int i=0;i<3;i++) {
		flag = 1;
		for(int j=0;j<3;j++) {
			if(m[j][i]!='X'||m[j][i]!='x') {
				flag=0;
				break;
			}
		}
		if(flag==1)
			return flag;
	}

	for(int i=0;i<3;i++) {
		flag = 1;
		for(int j=0;j<3;j++) {
			if(i==j) {
				if(m[i][j]!='X'||m[i][j]!='x') {
					flag=0;
					break;
				}
			}
		}
	}

	if(flag==1) {
		return flag;
	}

	for(int i=0;i<3;i++) {
		flag = 1;
		for(int j=0;j<3;j++) {
			if((2-i)==j) {
				if(m[i][j]!='X'||m[i][j]!='x') {
					flag=0;
					break;
				}
			}
		}
	}

	return flag;
}

int ocheck() {
	int flag=1;
	for(int i=0;i<3;i++) {
		flag = 1;
		for(int j=0;j<3;j++) {
			if(m[i][j]!='O'||m[i][j]!='o') {
				flag=0;
				break;
			}
		}
		if(flag==1)
			return flag;
	}

	for(int i=0;i<3;i++) {
		flag = 1;
		for(int j=0;j<3;j++) {
			if(m[j][i]!='O'||m[j][i]!='o') {
				flag=0;
				break;
			}
		}
		if(flag==1)
			return flag;
	}

	for(int i=0;i<3;i++) {
		flag = 1;
		for(int j=0;j<3;j++) {
			if(i==j) {
				if(m[i][j]!='O'||m[i][j]!='o') {
					flag=0;
					break;
				}
			}
		}
	}

	if(flag==1) {
		return flag;
	}

	for(int i=0;i<3;i++) {
		flag = 1;
		for(int j=0;j<3;j++) {
			if((2-i)==j) {
				if(m[i][j]!='O'||m[i][j]!='o') {
					flag=0;
					break;
				}
			}
		}
	}

	return flag;
}

int main(int argc, char const *argv[])
{
	int chance=0,r,w;
	for(int i=0;i<3;i++) {
		for(int j=0;j<3;j++) {
			m[i][j] = ' ';	
		}
	}
	cout<<"Instructions:\n1.X plays first\n2.For Input, use the following convention\n\tLet you have to input in 2nd row and 2nd column, write 1 1.";
	cout<<"\n\nLet's Start\n";
	show_status();
	for(int i=0;i<9;i++) {
		if(chance%2==0) {
			cout<<"X's turn"<<endl<<endl;
		}
		else {
			cout<<"O's turn"<<endl<<endl;
		}
		chance++;
		cin>>r>>w;
		cin>>m[r][w];
		show_status();
		if(xcheck()==1) {
			cout<<"\n\nX Won... \n";
			exit(0);
		}
		if(ocheck()==1) {
			cout<<"\n\nO Won... \n";
			exit(0);
		}
	}
	return 0;
}