#include<iostream>
#include<conio.h>

using namespace std;

struct node {
	int data;
	node* link;
};

int main() {
	char choice='y';
	node* head=NULL;
	node* temp = new node();
	temp->data=2;		//Equivalent to (*temp).data=2.
	temp->link=NULL;
	head=temp; 
	while(choice=='y') {
		temp=new node();
		cout<<"\n\nEnter data: ";
		cin>>temp->data;
		temp->link=NULL;
		node* temp1 = head;
		while(temp1->link!=NULL) {
			temp1 = temp1->link;
		}
		temp1->link=temp;
		cout<<"\n\nWould you like to go again?(y/n)";
		choice = getch();
	}
	cout<<"\n\n";
	node* transverse = head;
	while(transverse->link!=NULL) {
		cout<<transverse->data<<endl;
		transverse = transverse->link;
	}
	cout<<transverse->data;
	return 0;
}

