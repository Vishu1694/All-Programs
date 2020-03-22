#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;
int main()
{
	char s[80];
	cout<<"enter a string";
	cin>>s;
	int len=strlen(s);
	fstream file;
	file.open("test",ios::in|ios::out);
	for(int i=0;i<len;i++)
	   file.put(s[i]);
	file.seekg(0);
	
	char ch;
	while(file)
	{
		file.get(ch);
		cout<<ch;
	}
	return 0; 
}
